/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/21 14:01:35 by ocyn             ###   ########.fr       */
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

void	showNumbers(const string &title, int Size, char **nu)
{
	std::cout << title;
	for (int i = 1; i < Size; i++) {
		std::cout << nu[i];
		if (i + 1 != Size)
			std::cout << ", ";
		if (i < Size && i == DEFAULT) {
			std::cout << "[...]";
			break ;
		}
	}
	std::cout << std::endl;
}


int main(int ac, char **av)
{
	if (ac < 2)
		return(errLog("./PmergeMe <numbers to sort>"));
	(void)av; 
	string	In = av[1];
	PmergeMe	Jhon(av + 1, ac - 1);
	showNumbers("Before: ", ac, av);
	// Jhon.showVector();
	Jhon.sortVector();
	Jhon.showTimeToProcessVector();
	// Jhon.showList();
	log("\n_______END"); 
}
