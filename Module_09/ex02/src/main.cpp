/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/29 16:50:26 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#define DEFAULT 30 


void	log(const string content)
{
	std::cout << content << std::endl;
}

int	errLog(const string content)
{
	std::cerr << content << std::endl;
	return (EXIT_FAILURE);
}


int main(int ac, char **av)
{
	if (ac < 2)
		return(errLog("./PmergeMe <numbers to sort>"));
	(void)av; 
	string	In = av[1];
	PmergeMe	Jhon(av + 1, ac - 1);

	std::cout << "Before : ";
	Jhon.showVector();

	Jhon.sortVector();
	std::cout << "After : ";
	Jhon.showVector();
	Jhon.showTimeToProcessVector();

	Jhon.sortDeque();
	// std::cout << "After : ";
	// Jhon.showDeque();
	Jhon.showTimeToProcessDeque();
	log("\n_______END"); 
}
