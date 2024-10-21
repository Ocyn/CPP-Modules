/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/21 13:52:36 by ocyn             ###   ########.fr       */
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
# include <list>
# include <cstring>
# include <algorithm>

typedef std::string string;

class PmergeMe
{
	private:
		std::list<int>		_lst;
		double				_lstProcessTime;
		std::vector<int>	_vcr;
		double				_vcrProcessTime;
		PmergeMe();
		PmergeMe(const PmergeMe &Sample);

	public:
		PmergeMe(char **In, const size_t Size);
		~PmergeMe();
		PmergeMe&		operator=(const PmergeMe& Sample);
		void	showVector();
		void	showList();
		void	makePair();
		void	sortList();
		void	sortVector();
		void	showTimeToProcessVector();
		void	showTimeToProcessList();
};


std::ostream	&operator<<(std::ostream &os, const PmergeMe &Sample);

void	log(const string content);
int		errLog(const string content);

#endif