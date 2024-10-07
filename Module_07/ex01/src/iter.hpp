/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:47:43 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/07 20:36:22 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef std::string string;

template <typename C>
void	printElement(const C &content)
{
	std::cout << content << std::endl;
}

template <typename T, typename F>
void	iter(T array, size_t size, F ft)
{
	for (size_t i = 0; i < size; i++)
	{
		ft(array[i]);
	}
}
