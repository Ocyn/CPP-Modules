/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:16:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 15:47:14 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

int	CheckEntry( std::string in )
{
	for (size_t i = 0; i < in.length(); i++)
	{
		if (!isprint(in[i]) || in[i] == '\t')
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

std::string	Readentry( std::string Prompt )
{
	std::string	Entry;

	do
	{
		if (std::cin.eof())
			break;
		std::cout << Prompt << ": " << std::endl;
		std::getline(std::cin, Entry);
	} while (Entry.empty() == true || CheckEntry(Entry));
	return (Entry);
}

void	Column( std::string Title )
{
	std::string		AltTitle;

	std::cout << std::right;
	std::cout << std::setw (10);
	if (Title.length() > 10)
	{
		AltTitle = Title.substr(0, 9).append(".");
		std::cout << AltTitle;
	}
	else
		std::cout << Title;
	std::cout << std::setfill (' ');
}

void	ShowColumns( std::string One, std::string Two, std::string Three)
{
	Column(One);
	std::cout << "|";
	Column(Two);
	std::cout << "|";
	Column(Three);
	std::cout << std::endl;
}

