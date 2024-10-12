/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/11 15:27:22 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	SPAN_HPP
# define 	SPAN_HPP

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <ctime>
# include <numeric>
# include <algorithm>

typedef std::string string;

class Span
{
	private:
		std::vector<unsigned int> _cont;
		std::vector<unsigned int>::iterator _it;
	public:
		Span();
		~Span();
		Span(const unsigned int N);
		Span(const Span &Sample);
		Span&		operator=(const Span& Sample);
		void		addNumber(unsigned int N);
		void		addNumber(std::vector<unsigned int>::const_iterator __begin, std::vector<unsigned int>::const_iterator __end);
		size_t		shortestSpan();
		size_t		longestSpan();
		std::vector<unsigned int>::iterator	getDiff(const size_t i);
		const std::vector<unsigned int>&	getCont() const;
};

class	NotFoundException : public std::exception { public : const char * what() const throw(); };
class	ListFull : public std::exception { public : const char * what() const throw(); };


std::ostream	&operator<<(std::ostream &os, const Span &Sample);

#endif
