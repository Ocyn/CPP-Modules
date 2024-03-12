/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesome.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/12 06:58:34 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

void	Exiting( void )
{
	std::cout << "Exiting" << std::endl;
	return ;
}

void	Showing_List(Contact *Contacts, int ListSize)
{
	for (int id = 0; id < 8; id++)
	{
		std::cout << id + 1 << " : ";
		if (id <= ListSize && !Contacts[id].phonenumber.empty())
			std::cout << "Saved";
		else
			std::cout << "Empty";
		std::cout << std::endl;
	}
}

void	SearchContact(PhoneBook *Book)
{
	std::string	Prompt;
	int			index = 0;

	std::cout << "Showing all saved contacts" << std::endl;
	Showing_List(Book->Contacts, Book->List_len);
	std::cout << "\rPlease Enter desired Contact Index" << std::endl;
	std::cin >> Prompt;
	index = atoi(Prompt);
	while (index < 1 || index > 8)
		std::cout << "\rInvalid input, please try again";
	if (index >= 1 && index <= 8)
		Book->Contacts[index].ExtendData();
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
		if (!Prompt.compare("ADD")) {
			Book.Contacts[(Book.List_len % 8)].Setup((Book.List_len % 8));
			Book.List_len++;
		}
		else if (!Prompt.compare("SEARCH"))
			SearchContact(&Book);
		else if (!Prompt.compare("EXIT"))
		{
			Exiting();
			break ;
		}
	}
	return (0);
}
