/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/08 20:08:20 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

typedef std::string string;

class	NotFoundException : public std::exception { public : const char * what() const throw(); };

const char *NotFoundException::what() const throw() {
	return ("Element not found");
}

template< typename T>
typename T::iterator	easyfind(T &seek, int n)
{
	typename T::iterator	it = std::find(seek.begin(), seek.end(), n);
	if (it == seek.end())
		throw NotFoundException();
	return (it);
}

template< typename T>
void	fillContainer(T &cont, size_t size)
{
	for (size_t i = 0; i < size; i++) {
		cont.push_back(static_cast<int>(i));
	}
}
