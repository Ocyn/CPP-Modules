/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/08 23:52:04 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

std::string	Readentry( std::string Prompt );

Contact::Contact( void )
{
	std::cout << "Contact Construct" << std::endl;
	std::cout << "Please enter: " << std::endl;
	this->firstname.assign(Readentry("First Name"));
	this->lastname.assign(Readentry("Last Name"));
	this->nickname.assign(Readentry("NickName"));
	this->phonenumber.assign(Readentry("Phone Number"));
	this->darkestsecret.assign(Readentry("Darkest Secret"));
	std::cout << std::endl << "Contact Added Successfully !" << std::endl;
	return ;
}

Contact::~Contact( void )
{
	std::cout << "Contact Destruct" << std::endl;
	return ;
}

std::string	Readentry( std::string Prompt )
{
	std::string	Entry;

	while (Entry.empty()) {
		std::cout << "\r" << Prompt << ": ";
		std::cin >> Entry;
	}
	return (Entry);
}

void	Contact::ExtendData( void )
{
	std::cout << "Extend Contact N" << this->id << std::endl;
	std::cout << "First Name: "<< this->firstname << std::endl;
	std::cout << "Last Name: "<< this->lastname << std::endl;
	std::cout << "NickName: "<< this->nickname << std::endl;
	std::cout << "PhoneNumber: "<< this->phonenumber << std::endl;
	std::cout << "Darkest Secret: "<< this->darkestsecret << std::endl;
}
