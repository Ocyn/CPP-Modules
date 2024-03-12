/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Commands.utils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 05:12:06 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/12 05:29:04 by jcuzin           ###   ########.fr       */
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
	for (int id = 0; id <= 8; id++)
	{
		std::cout << id << " : ";
		if (id <= ListSize)
			std::cout << "Saved";
		else
			std::cout << "Empty";
		std::cout << std::endl;
	}
}

void	SearchContact(PhoneBook Book)
{
	std::cout << "Showing all saved contacts" << std::endl;
	Showing_List(Book.Contacts, Book.List_len);
	std::cout << "\rPlease Enter desired Contact Index" << std::endl;
	return ;
}
