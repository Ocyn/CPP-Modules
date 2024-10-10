/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/10 21:00:14 by ocyn             ###   ########.fr       */
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
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() { };
		~MutantStack() { };
		MutantStack(const MutantStack &Sample) {
			this = Sample;
		  };
		MutantStack&		operator=(const MutantStack& Sample) {
			if (Sample.c != this->c)
				this->c = Sample.c;
			return (this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator		begin() { return this->c.begin(); };
		iterator		end() { return this->c.end(); };

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		const_iterator		cbegin() { return this->c.begin(); };
		const_iterator		cend() { return this->c.end(); };

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		reverse_iterator		rbegin() { return this->c.rbegin(); };
		reverse_iterator		rend() { return this->c.rend(); };

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		const_reverse_iterator		crbegin() { return this->c.rbegin(); };
		const_reverse_iterator		crend() { return this->c.rend(); };
};

class	OutOfBound : public std::exception { public : const char * what() const throw(); };

template <typename T>
std::ostream	&operator<<(std::ostream &os, const MutantStack<T> &Sample);
