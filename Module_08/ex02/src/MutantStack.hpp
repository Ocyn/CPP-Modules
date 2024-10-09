/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/09 21:01:15 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	MUTANTSTACK_HPP
# define 	MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <ctime>
# include <numeric>
# include <algorithm>
# include <stack>

typedef std::string string;

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		typename std::vector<T>::iterator	_it;
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &Sample);
		MutantStack&		operator=(const MutantStack& Sample);
};

class	OutOfBound : public std::exception { public : const char * what() const throw(); };

template <typename T>
std::ostream	&operator<<(std::ostream &os, const MutantStack<T> &Sample);

#endif