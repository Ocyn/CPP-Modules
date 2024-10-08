/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:51:22 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/08 16:51:55 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef std::string string;

template< typename T >
void	swap(T &x, T &y)
{
	T	z = x;
	x = y;
	y = z;
}

template< typename T >
const T& min(T &x, T &y)
{
	return (x < y ? x : y);
}

template< typename T >
const T& max(T &x, T &y)
{
	return (x > y ? x : y);
}
