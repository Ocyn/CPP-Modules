/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 15:11:35 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

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

int	Contact::Setup_all( int list_size )
{
	std::cout << "Adding Contact" << std::endl << "Please enter: " << std::endl;
	if (std::cin.eof())
		Exiting();
	this->firstname = Readentry("First Name");
	this->lastname = Readentry("Last Name");
	this->nickname = Readentry("NickName");
	this->phonenumber = Readentry("Phone Number");
	this->darkestsecret = Readentry("Darkest Secret");
	this->id = list_size + 1;
	std::cout << std::endl << "Contact Added Successfully !" << std::endl;
	return (EXIT_SUCCESS);
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

std::string	Contact::Get_Firstname( void )
{
	return (this->firstname);
}
std::string	Contact::Get_Lastname( void )
{
	return (this->lastname);
}
std::string	Contact::Get_Nickname( void )
{
	return (this->nickname);
}
std::string	Contact::Get_Phonenumber( void )
{
	return (this->phonenumber);
}
std::string	Contact::Get_Darkestsecret( void )
{
	return (this->darkestsecret);
}
