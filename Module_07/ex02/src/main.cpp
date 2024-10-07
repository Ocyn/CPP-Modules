/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/07 23:43:03 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	log(string content)
{
	std::cout << content << std::endl;
}

template <typename T>
void	printElement(const T &element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	setRandElement(T &bloc)
{
	bloc = rand() % 99999;
}

template <typename T, typename F>
void	iterArray(Array<T> &array, F ft)
{
	for (size_t i = 0; i < array.Size(); i++)
	{
		try {
			ft(array[i]);
		}
		catch(const OutOfBoundException& e) {
			std::cerr << e.what() << '\n';
		}
	}
}

#define DEFAULT 12

int main( void )
{
	srand(time(0));
	log("____Creating arrays:");
	log("\n\tInt Array");
	{
		Array<int>		Bob(DEFAULT);
		iterArray(Bob, setRandElement<int>);
		iterArray(Bob, printElement<int>);
	}
	log("\n\tFloat Array");
	{
		Array<float>		Bob(DEFAULT);
		iterArray(Bob, setRandElement<float>);
		iterArray(Bob, printElement<float>);
	}
	log("\n\tString Array");
	{
		Array<string>		Bob(DEFAULT);
		iterArray(Bob, setRandElement<string>);
		iterArray(Bob, printElement<string>);
	}
	return 0;
}
