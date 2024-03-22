/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesome.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/22 04:39:09 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

void	Exiting( void )
{
	std::cout << "Exiting" << std::endl;
	return ;
}

void	Column( std::string Title )
{
	std::cout << std::right;
	std::cout << std::setw (10);
	std::cout << Title;
	std::cout << std::setfill (' ');
	/*	Notes
		Si le texte dépasse la largeur de la colonne,
		il faut le tronquer et remplacer le dernier caractère affiché par un point (’.’).
	*/
}

void	ShowColumns( std::string One, std::string Two, std::string Three, std::string Four )
{
	Column(One);
	std::cout << "|";
	Column(Two);
	std::cout << "|";
	Column(Three);
	std::cout << "|";
	Column(Four);
	std::cout << std::endl;
}

int	Showing_List(Contact *Contacts, int ListSize)
{
	(void)ListSize;
	(void)Contacts;
	if (ListSize < 1)
	{
		std::cout << "No Contact" << std::endl;
		return (EXIT_FAILURE);
	}
	std::stringstream StrStream;
	std::string	StrId;
	ShowColumns("Index", "First Name", "Last Name", "Nickname");
	std::cout << std::endl;
	for (int nb = 0; nb < ListSize; nb++)
	{
		StrStream << Contacts[nb].id;
		StrStream >> StrId;
		ShowColumns(StrId, Contacts[nb].firstname, Contacts[nb].lastname, Contacts[nb].nickname);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

void	SearchContact(PhoneBook *Book)
{
	int			index = 0;

	std::cout << "Showing all saved contacts" << std::endl;
	if (Showing_List(Book->Contacts, Book->List_len) == EXIT_SUCCESS)
	{
		std::cout << "\rPlease Enter desired Contact Index" << std::endl;
		while (std::cin >> index && (index < 1 || index > 8) && index > Book->List_len)
			;
		if (index >= 1 && index <= 8)
			Book->Contacts[index].ExtendData();
	}
	std::cout << "\rPlease Enter Command (ADD, SEARCH, EXIT)" << std::endl;
	return ;
}


int	main(void)
{
	std::string	Prompt;
	PhoneBook	Book;

	std::cout << "\rPlease Enter Command (ADD, SEARCH, EXIT)" << std::endl;
	while (std::cin >> Prompt)
	{
		/*	Notes
		Book.Contacts.id fait n'importe quoi, il se met pas du tout entre a 1 et 8. Enqueter...
		*/
		if (!Prompt.compare("ADD") || !Prompt.compare("a")) {
			Book.Contacts[(Book.List_len % 8)].Setup((Book.List_len % 8));
			Book.List_len++;
		}
		else if (!Prompt.compare("SEARCH") || !Prompt.compare("s"))
			SearchContact(&Book);
		else if (!Prompt.compare("EXIT") || !Prompt.compare("e"))
		{
			Exiting();
			break ;
		}
	}
	return (0);
}
