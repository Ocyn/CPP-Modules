/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/11 14:52:12 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void	log(string content)
{
	std::cout << content << std::endl;
}


#define CONTAINER_SIZE 9

int main()
{
	srand(time(0));
	log("\tCreating list");
	Span	jeff(CONTAINER_SIZE);
	Span	fred(CONTAINER_SIZE);
	for (size_t i = 0; i <= CONTAINER_SIZE; i++)
	{
		unsigned int	nb = rand() % 99 + 1;
		try {
			jeff.addNumber(nb);
			std::cout << "Added [" << nb << "]" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << "Couldn't add [" << nb << "] : " << e.what() << '\n';
		}
	}
	log("\tTesting fillCont()");
	std::vector<unsigned int> test(CONTAINER_SIZE);
	for (size_t i = 0; i < CONTAINER_SIZE; i++)
	{
		unsigned int	nb = (rand() % 99 + 1) * 100;
		test[i] = nb;
	}
	try {
		fred.addNumber(test.begin(), test.end());
	}
	catch(const std::exception& e){
		std::cerr << "Couldn't fill Fred: " << e.what() << '\n';
	}
	log("Added 100 numbers to Fred");
	log("\tShortestSpan");
	try {
		std::cout << jeff.shortestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	log("\tLonguestspan");
	try {
		std::cout << jeff.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}
