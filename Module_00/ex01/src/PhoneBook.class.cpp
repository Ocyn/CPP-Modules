/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/09 04:39:41 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

PhoneBook::PhoneBook( void )
{
	std::cout << "PhoneBook Construct" << std::endl;
	this->List_len = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "PhoneBook Destruct" << std::endl;
	return ;
}

void	PhoneBook::Search( void )
{
	std::cout << "Searching..." << std::endl;
	std::cout << "\rPlease Enter Command (ADD, SEARCH, EXIT)" << std::endl;
	return ;
}
void	PhoneBook::AddContact( void )
{
	if (this->List_len > 8)
	{
		std::cout << std::endl << "Max Contacts List Len Reached" << std::endl;
		return ;
	}
	std::cout << "Adding Contact" << std::endl;
	this->ContactId[List_len] = new Contact;
	this->List_len++;
	std::cout << "\rPlease Enter Command (ADD, SEARCH, EXIT)" << std::endl;
	return ;
}

void	PhoneBook::DestroyBook( void )
{
	std::cout << "Exiting" << std::endl;
	for (int i = 0; i < List_len; i++)
	{
		this->ContactId[i] = delete this->ContactId[i];
	}
	delete[] ContactId;
	return ;
}
