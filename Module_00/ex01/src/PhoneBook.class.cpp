/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 15:47:57 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

PhoneBook::PhoneBook( void )
{
	std::cout << "PhoneBook Construct" << std::endl;
	this->List_len = 0;
	this->index = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "PhoneBook Destruct" << std::endl;
	return ;
}

int	PhoneBook::Get_Index( void )
{
	return (this->index);
}

int	PhoneBook::Get_Listlen( void )
{
	return (this->List_len);
}

void	PhoneBook::Set_Index( int Set )
{
	this->index = Set;
}

void	PhoneBook::Set_Listlen( int Set )
{
	this->List_len = Set;
}

void	PhoneBook::Index_up( void )
{
	this->index++;
	if (this->index >= 8)
		this->index = 0;
}

int	PhoneBook::SetupContact( void )
{
	if (!this->Contacts[this->index].Setup_all(this->index))
	{
		if (this->List_len < 8)
			this->List_len++;
		this->Index_up();
	}
	return (EXIT_SUCCESS);
}

int	PhoneBook::Showing_List( void )
{
	if (this->List_len < 1)
	{
		std::cout << "No Contact" << std::endl;
		return (EXIT_FAILURE);
	}
	Column("Index");
	std::cout << "|";
	ShowColumns("First Name", "Last Name", "Nickname");
	std::cout << std::endl;
	for (int nb = 0; nb < this->List_len; nb++)
	{
		std::stringstream	index;
		index << Contacts[nb].id;
		Column(index.str());
		std::cout << "|";
		ShowColumns(this->Contacts[nb].Get_Firstname() \
		, this->Contacts[nb].Get_Lastname() \
		, this->Contacts[nb].Get_Nickname());
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

void	PhoneBook::SearchContact( void )
{
	int			index;

	std::cout << "Showing all saved contacts" << std::endl;
	if (Showing_List() == EXIT_SUCCESS)
	{
		if (std::cin.eof())
			Exiting();
		std::string	Entry;
		Entry = Readentry("Please type contact index");
		if (Entry.empty())
			Exiting();
		std::stringstream	ssint(Entry);
		ssint >> index;
		if (index - 1 >= 0 && index - 1 < this->List_len)
			this->Contacts[index - 1].ExtendData();
		else
			std::cout << "Unreachable contact" << std::endl;
	}
	return ;
}
