/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/18 17:54:47 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	PMERGEME_HPP
# define 	PMERGEME_HPP

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <vector>
# include <list>
# include <cstring>
# include <algorithm>

typedef std::string string;

class PmergeMe
{
	private:
		std::list<int>		_lst;
		std::vector<int>	_vcr;
		PmergeMe();
		PmergeMe(const PmergeMe &Sample);

	public:
		//PmergeMe(const string &PmergeMe);
		~PmergeMe();
		PmergeMe&		operator=(const PmergeMe& Sample);
};

std::ostream	&operator<<(std::ostream &os, const PmergeMe &Sample);

#endif