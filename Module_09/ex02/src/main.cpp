/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/20 12:59:10 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	log(const string content)
{
	std::cout << content << std::endl;
}

int	errLog(const string content)
{
	std::cerr << content << std::endl;
	return (EXIT_FAILURE);
}


#define DEFAULT 9

int main(int ac, char **av)
{
	if (ac < 2)
		return(errLog("./PmergeMe <numbers to sort>"));
	(void)av; 
	string	In = av[1];
	PmergeMe	Jhon(av + 1, ac - 1);
	std::cout << "Before:";
	Jhon.showVector();
	Jhon.sortVector();
	Jhon.showTimeToProcessVector();
	// Jhon.showList();
	log("\n_______END"); 
	return 0;
}
