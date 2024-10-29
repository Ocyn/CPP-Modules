/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/29 18:09:47 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	PMERGEME_HPP
# define 	PMERGEME_HPP

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <time.h>
# include <ctime>
# include <vector>
# include <limits>
# include <deque>
# include <cstring>
# include <algorithm>

typedef std::string string;

class PmergeMe
{
	private:
		std::deque<int>		_deq;
		double				_deqProcessTime;
		std::vector<int>	_vcr;
		double				_vcrProcessTime;
		bool				_isValid;
		PmergeMe();
		PmergeMe(const PmergeMe &Sample);

	public:
		PmergeMe(char **In, const size_t Size);
		~PmergeMe();
		PmergeMe&		operator=(const PmergeMe& Sample);
		std::vector<int>	&getVector();
		std::deque<int>		&getDeque();
		void	showVector();
		void	showDeque();
		void	makePair();
		void	sortDeque();
		void	sortVector();
		bool	isInputValid();
		void	showTimeToProcessVector();
		void	showTimeToProcessDeque();
};


std::ostream	&operator<<(std::ostream &os, const PmergeMe &Sample);

void	log(const string content);
int		errLog(const string content);

#endif