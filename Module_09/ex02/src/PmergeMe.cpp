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
	<<  " elements with std::vector : " << this->_vcrProcessTime << " s" << std::endl;
}

void	PmergeMe::showTimeToProcessList()
{
	std::cout << "Time to process a range of " << this->_lst.size() \
	<<  " elements with std::list : " << this->_lstProcessTime << " s" << std::endl;
}

void	fillPairVector(std::vector<std::pair<int, int> > &vecPair, std::vector<int> &vec, int sizeOfVec)
{
	for (int i = 0; i < sizeOfVec - (sizeOfVec % 2 != 0); i += 2) {
		vecPair.push_back(std::make_pair(vec[i], vec[i + 1]));
		// std::cout << "->[" << vec[i] << "," << vec[i + 1] << "] ";
	}
}

// void	mergeSort(std::vector<int> &Vec)
// {
	
// }

void	PmergeMe::sortVector()
{
	log("\nSorting Vector...");
	clock_t	_start = clock();
	// todo


	int	len = this->_vcr.size();
	std::vector<std::pair<int, int> >	pairVec;
	int	retarded;
	(void)retarded;

	if (len % 2 != 0)
		retarded = *( this->_vcr.end() - 1);
	std::cout << "Get max element of each pair:\t";
	fillPairVector(pairVec, this->_vcr, len);
	std::cout << "Done" << std::endl; 
	std::cout << "Sort max element list:\t";
	for (std::vector<std::pair<int, int> >::iterator it = pairVec.begin(); it != pairVec.end(); ++it) {
		std::cout << "[" << it->first << "|" << it->second << "] ";
	}
	std::cout << "Done" << std::endl;
	clock_t	_end = clock();
	this->_vcrProcessTime = static_cast<double>((_end - _start)) / CLOCKS_PER_SEC;
	log("Vector Sorted");
}

void	PmergeMe::sortList()
{
	std::cout << "Sorting List...\t";
	clock_t	_start = clock();
	// todo
	clock_t	_end = clock();
	this->_lstProcessTime = static_cast<double>((_end - _start)) / CLOCKS_PER_SEC;
	std::cout << "Done !" << std::endl;
}
