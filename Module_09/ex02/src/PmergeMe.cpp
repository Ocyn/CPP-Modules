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

PmergeMe::PmergeMe(char **In, const size_t Size)
{
	for (size_t i = 0; i < Size; i++) {
		this->_vcr.push_back(atoi(In[i]));
	}
	for (size_t i = 0; i < Size; i++) {
		this->_deq.push_back(atoi(In[i]));
	}
}

void	PmergeMe::showVector()
{
	for (std::vector<int>::iterator	it = this->_vcr.begin(); it != this->_vcr.end(); ++it) {
		std::cout << *it;
		if (it != this->_vcr.end() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

void	PmergeMe::showDeque()
{
	for (std::deque<int>::iterator	it = this->_deq.begin(); it != this->_deq.end(); ++it) {
		std::cout << *it;
		if (it != this->_deq.end() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

void	PmergeMe::showTimeToProcessVector()
{
	std::cout << "Time to process a range of " << this->_vcr.size() \
	<<  " elements with std::vector : " << this->_vcrProcessTime << " s" << std::endl;
}

void	PmergeMe::showTimeToProcessDeque()
{
	std::cout << "Time to process a range of " << this->_deq.size() \
	<<  " elements with std::deque : " << this->_deqProcessTime << " s" << std::endl;
}

void	fillPairVector(std::vector<std::pair<int, int> > &vecPair, const std::vector<int> &vec, int sizeOfVec)
{
	for (int i = 0; i < sizeOfVec - (sizeOfVec % 2 != 0); i += 2) {
		if (vec[i] > vec[i + 1])
			vecPair.push_back(std::make_pair(vec[i], vec[i + 1]));
		else
			vecPair.push_back(std::make_pair(vec[i + 1], vec[i]));
	}
}

std::vector<int>::iterator	binarySearchVector(std::vector<int> &Vec, int Target)
{
	return (std::lower_bound(Vec.begin(), Vec.end(), Target));
}

std::vector<int>	mergeSortVector(std::vector<int> Vec)
{
	std::vector<std::pair<int, int> >	pairVec;
	std::vector<int>					maxVec;
	std::vector<int>					minVec;

	if (Vec.size() < 2)
		return (Vec);
	int	last = -1;
	if (Vec.size() % 2 != 0) {
		last = *(Vec.end() - 1);
		Vec.erase(Vec.end() - 1);
	}
	fillPairVector(pairVec, Vec, Vec.size());
	for (std::vector<std::pair<int, int> >::iterator it = pairVec.begin(); \
	it != pairVec.end(); ++it) {
		maxVec.push_back(it->first);
		minVec.push_back(it->second);
	}
	if (last > -1)
		minVec.push_back(last);
	if (maxVec.size() > 2)
		maxVec = mergeSortVector(maxVec);
	for (std::vector<int>::iterator it = minVec.begin(); it != minVec.end(); ++it) {
		maxVec.insert(binarySearchVector(maxVec, *it), *it);
	}
	return (maxVec);
}


void	PmergeMe::sortVector()
{
	clock_t	_start = clock();
	this->_vcr = mergeSortVector(this->_vcr);
	clock_t	_end = clock();
	this->_vcrProcessTime = static_cast<double>((_end - _start)) / CLOCKS_PER_SEC;
}


std::deque<int>::iterator	binarySearchDeque(std::deque<int> &List, int Target)
{
	return (std::lower_bound(List.begin(), List.end(), Target));
}

void	fillPairDeque(std::deque<std::pair<int, int> > &dequePair, std::deque<int> &deque)
{
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it += 2) {
		if (*it > *(it + 1))
			dequePair.push_back(std::make_pair(*it, *(it + 1)));
		else
			dequePair.push_back(std::make_pair(*(it + 1), *it));
	}
}

std::deque<int>	mergeSortDeque(std::deque<int> Deque)
{
	std::deque<std::pair<int, int> >	pairDeque;
	std::deque<int>					maxDeque;
	std::deque<int>					minDeque;

	if (Deque.size() < 2)
		return (Deque);
	int	last = -1;
	if (Deque.size() % 2 != 0) {
		last = *(Deque.end() - 1);
		Deque.erase(Deque.end() - 1);
	}
	fillPairDeque(pairDeque, Deque);
	for (std::deque<std::pair<int, int> >::iterator it = pairDeque.begin(); \
	it != pairDeque.end(); ++it) {
		maxDeque.push_back(it->first);
		minDeque.push_back(it->second);
	}
	if (last > -1)
		minDeque.push_back(last);
	if (maxDeque.size() > 2)
		maxDeque = mergeSortDeque(maxDeque);
	for (std::deque<int>::iterator it = minDeque.begin(); it != minDeque.end(); ++it) {
		maxDeque.insert(binarySearchDeque(maxDeque, *it), *it);
	}
	return (maxDeque);
}

void	PmergeMe::sortDeque()
{
	clock_t	_start = clock();

	
	this->_deq = mergeSortDeque(this->_deq);
	clock_t	_end = clock();
	this->_deqProcessTime = static_cast<double>((_end - _start)) / CLOCKS_PER_SEC;
}
