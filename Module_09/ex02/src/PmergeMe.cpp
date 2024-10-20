/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:35 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/18 16:38:38 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

bool	checkNumber(const int &n)
{
	if (!std::isdigit(n))
		return (false);
	if (n < 0 || std::numeric_limits<int>::max() < n)
		return (false);
	return (true);
}

PmergeMe::PmergeMe(char **In, const size_t Size)
{
	std::cout << "Filling Vector\t";
	for (size_t i = 0; i < Size; i++) {
		this->_vcr.push_back(atoi(In[i]));
		// std::cout << "Added [" << atoi(In[i]) << "] to vector" << std::endl;
	}
	std::cout << "Done" << std::endl;
	std::cout << "Filling List\t";
	for (size_t i = 0; i < Size; i++) {
		this->_lst.push_back(atoi(In[i]));
		// std::cout << "Added [" << atoi(In[i]) << "] to vector" << std::endl;
	}
	std::cout << "Done" << std::endl;
}

void	PmergeMe::showVector()
{
	std::cout << "Vector, size: " << this->_vcr.size() << std::endl;
	for (std::vector<int>::iterator	it = this->_vcr.begin(); it != this->_vcr.end(); ++it) {
		std::cout << "[" << *it << "] ";
	}
	std::cout << std::endl;
}

void	PmergeMe::showList()
{
	std::cout << "List, size: " << this->_lst.size() << std::endl;
	for (std::list<int>::iterator	it = this->_lst.begin(); it != this->_lst.end(); ++it) {
		std::cout << "[" << *it << "] ";
	}
	std::cout << std::endl;
}

void	PmergeMe::showTimeToProcessVector()
{
	std::cout << "Time to process a range of " << this->_vcr.size() \
	<<  " elements with std::vector : " << this->_vcrProcessTime << " us" << std::endl;
}

void	PmergeMe::showTimeToProcessList()
{
	std::cout << "Time to process a range of " << this->_lst.size() \
	<<  " elements with std::list : " << this->_lstProcessTime << " us" << std::endl;
}

void	PmergeMe::sortVector()
{
	clock_t	_start = clock();
	std::cout << "Sorting Vector...\t";
	for (size_t i = 0; i < 9999; i++)
	{
		string test = "salam les khoya";
	}
	clock_t	_end = clock();
	this->_vcrProcessTime = static_cast<double>((_end - _start)) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Done !" << std::endl;
}

void	PmergeMe::sortList()
{
	clock_t	_start = clock();
	std::cout << "Sorting List...\t";
	for (size_t i = 0; i < 9999; i++)
	{
		string test = "salam les khoya";
	}
	clock_t	_end = clock();
	this->_lstProcessTime = static_cast<double>((_end - _start)) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Done !" << std::endl;
}
