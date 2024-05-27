/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:17:40 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/27 23:51:38 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool	returnError(std::string log)
{
	std::cerr << log << std::endl;
	return (EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (returnError("Not enough argument"));
	Harl	Carl;
	// for (size_t i = 1; i < argc; i++)
	// {
	// 	std::string	level;
	// 	level = argv[i];
	// 	Carl.complain(level);
	// }
	Carl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
