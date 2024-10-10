/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/10 19:58:42 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <ctime>
# include <numeric>
# include <algorithm>
# include <stack>
# include <list>

typedef std::string string;

template <typename T>
class MutantStack : public std::stack<T, std::vector<T> >
{
	public:
		MutantStack() { };
		~MutantStack() { };
		MutantStack(const MutantStack &Sample);
		MutantStack&		operator=(const MutantStack& Sample);

		typedef typename std::vector<T>::iterator iterator;

		iterator		begin() { return this->c.begin(); };
		iterator		end() { return this->c.end(); };
};

class	OutOfBound : public std::exception { public : const char * what() const throw(); };

template <typename T>
std::ostream	&operator<<(std::ostream &os, const MutantStack<T> &Sample);
