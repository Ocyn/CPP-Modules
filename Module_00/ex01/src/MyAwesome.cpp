/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesome.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 15:53:25 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

void	Exiting( void )
{
	std::cout << std::endl << "Exiting" << std::endl;
	exit(0);
}

int	main(void)
{
	std::string	Prompt;
	PhoneBook	Book;

	do
	{
		if (std::cin.eof())
			Exiting();
		std::cout << "Please Enter Command (ADD; SEARCH; EXIT)" << std::endl;
		std::getline(std::cin, Prompt);
		if (!Prompt.compare("ADD"))
			Book.SetupContact();
		if (!Prompt.compare("SEARCH"))
			Book.SearchContact();
	} while (Prompt.compare("EXIT"));
	std::cout << std::endl << "Exiting" << std::endl;
	return (0);
}
