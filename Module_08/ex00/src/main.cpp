/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/09 15:06:14 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


void	log(string content)
{
	std::cout << content << std::endl;
}



#define CONTAINER_SIZE 99

int main( int ac, char **av )
{
	if (ac !=  2)
		return (1);
	int	seek = atoi(av[1]);

	log("Trying to find element in vector");
	std::vector<int>	bob;
	fillContainer(bob, CONTAINER_SIZE);
	try {
		std::cout << *easyfind(bob, seek) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	log("Trying to find element in list");
	std::list<int>	michel;
	fillContainer(michel, CONTAINER_SIZE);
	try {
		std::cout << *easyfind(michel, seek) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}
