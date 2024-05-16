/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesome.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/16 20:08:32 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

void	Exiting( void )
{
	std::cout << std::endl << "Exiting" << std::endl;
	exit(0);
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

int	Showing_List(Contact *Contacts, int ListSize)
{
	if (ListSize < 1)
	{
		std::cout << "No Contact" << std::endl;
		return (EXIT_FAILURE);
	}
	Column("Index");
	std::cout << "|";
	ShowColumns("First Name", "Last Name", "Nickname");
	std::cout << std::endl;
	for (int nb = 0; nb < ListSize; nb++)
	{
		std::stringstream	index;
		index << Contacts[nb].id;
		Column(index.str());
		std::cout << "|";
		ShowColumns(Contacts[nb].firstname, Contacts[nb].lastname, Contacts[nb].nickname);
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

void	SearchContact(PhoneBook *Book)
{
	int			index;

	std::cout << "Showing all saved contacts" << std::endl;
	if (Showing_List(Book->Contacts, Book->List_len) == EXIT_SUCCESS)
	{
		if (std::cin.eof())
			Exiting();
		std::string	Entry = Readentry("Please type contact index");
		if (Entry.empty())
			Exiting();
		std::stringstream	ssint(Entry);
		ssint >> index;
		if (index - 1 >= 0 && index - 1 < Book->List_len)
			Book->Contacts[index - 1].ExtendData();
		else
			std::cout << "Unreachable contact" << std::endl;
	}
	return ;
}


int	main(void)
{
	std::string	Prompt;
	PhoneBook	Book;
	int			index = 0;
	do
	{
		if (std::cin.eof())
			Exiting();
		std::cout << "Please Enter Command (ADD; SEARCH; EXIT)" << std::endl;
		std::getline(std::cin, Prompt);
		if (!Prompt.compare("ADD"))
		{
			if (!Book.Contacts[index].Setup(index))
			{
				if (Book.List_len < 8)
					Book.List_len++;
				index++;
				if (index >= 8)
					index = 0;
			}
		}
		if (!Prompt.compare("SEARCH"))
			SearchContact(&Book);
	} while (Prompt.compare("EXIT"));
	return (0);
}
