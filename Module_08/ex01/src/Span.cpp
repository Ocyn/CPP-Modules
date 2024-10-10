/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:35 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/10 20:41:40 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(const unsigned int N): 
_cont(std::vector<unsigned int>(N)), 
_it(this->_cont.begin())
{
}

Span::~Span()
{
}

Span::Span(const Span& Sample)
{
	*this = Sample;
}


Span& 	Span::operator=(const Span& Sample)
{
	this->_cont = Sample.getCont();
	return (*this);
}


void		Span::addNumber(unsigned int N)
{
	if (this->_it == this->_cont.end())
		throw ListFull();
	*this->_it = N;
	this->_it++;
}

size_t		Span::shortestSpan()
{
	std::vector<unsigned int> result = this->_cont;
	std::sort(result.begin(), result.end());
	std::adjacent_difference(this->_cont.begin(), this->_it, result.begin());
	return (*std::min_element(result.begin() + 1, result.end()));
}


size_t		Span::longestSpan()
{
	return (*std::max_element(this->_cont.begin(), this->_it) - \
	*std::min_element(this->_cont.begin(), this->_it));
}

void	Span::fillCont(std::vector<unsigned int>::const_iterator __begin, std::vector<unsigned int>::const_iterator __end)
{
	if (std::distance(__begin, __end) > std::distance(this->_cont.begin(), this->_cont.end()))
		throw	ListFull();
	this->_cont.insert(this->_it, __begin, __end);
	this->_it += std::distance(__begin, __end);
}

const std::vector<unsigned int>&	Span::getCont() const
{
	return (this->_cont);
}

const char *NotFoundException::what() const throw() {
	return ("Element not found");
}

const char *ListFull::what() const throw() {
	return ("Not enough space to add new number to the list");
}

