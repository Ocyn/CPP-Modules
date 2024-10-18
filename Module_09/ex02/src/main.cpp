/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/18 19:13:15 by ocyn             ###   ########.fr       */
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
	std::cout << "Before:" << In << std::endl;
	PmergeMe	Jhon(av + 1, ac - 1);
	log("\n_______END"); 
	return 0;
}
