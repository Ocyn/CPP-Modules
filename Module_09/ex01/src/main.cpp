/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/18 11:52:47 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


void	log(string content)
{
	std::cout << content << std::endl;
}

int	errLog(string content)
{
	std::cerr << content << std::endl;
	return (EXIT_FAILURE);
}

#define DEFAULT 9

int main(int ac, char **av)
{
	if (ac < 2)
		return (errLog("./RPN \"your_reverse_polish_notation_here\""));
	string	rpn = av[1];
	log("Got Expression: " + rpn);
	return 0;
}
