/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/14 19:06:38 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

std::string	Readentry( std::string Prompt );

Contact::Contact( void )
{
	std::cout << "Contact Construct" << std::endl;
	return ;
}

Contact::~Contact( void )
{
	std::cout << "Contact Destruct" << std::endl;
	return ;
}

int	Contact::Setup( int list_size )
{
	if (list_size <= 8) {
		std::cout << "Adding Contact" << std::endl << "Please enter: " << std::endl;
		if (std::cin.eof())
			return (Exiting(), EXIT_SUCCESS);
		this->firstname = Readentry("First Name");
		this->lastname = Readentry("Last Name");
		this->nickname = Readentry("NickName");
		this->phonenumber = Readentry("Phone Number");
		this->darkestsecret = Readentry("Darkest Secret");
		this->id = list_size + 1;
		std::cout << std::endl << "Contact Added Successfully !" << std::endl;
		return (EXIT_SUCCESS);
	}
	else
		std::cout << std::endl << "Max list size reached" << std::endl;
	return (EXIT_FAILURE);
}

std::string	Readentry( std::string Prompt )
{
	std::string	Entry;

	std::cout << Prompt << ": ";
	do
	{
		if (std::cin.eof())
			return (Exiting(), Entry);
		std::getline(std::cin, Entry);
	} while (Entry.empty() == true);
	return (Entry);
}

void	Contact::ExtendData( void )
{
	std::cout << "Extending Contact " << this->id << std::endl;
	std::cout << "First Name: " << this->firstname << std::endl;
	std::cout << "Last Name: " << this->lastname << std::endl;
	std::cout << "NickName: " << this->nickname << std::endl;
	std::cout << "PhoneNumber: " << this->phonenumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestsecret << std::endl;
}
