/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/08/02 13:11:05 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

#define _NB 10

// void	_display(string Type, string Data)
// {
// 	int		Entier = 42;
// 	char	Lettre = 'A';
// 	float	Decimale = 42.42;
// 	double	SuperDecimale = 42.4242;

// 	std::cout << Type << ": ";
// 	std::cout << Data;
// 	std::cout << std::endl;
// }

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "\n  Invalid argument format.\nOne argument at execution espected." << std::endl;
		return (1);
	}
	std::cout << "\n________Convert\n" << std::endl;

	string	In = av[1];
	try
	{
		Scalar::convert(In);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	(void)av;
	return (0);
}
