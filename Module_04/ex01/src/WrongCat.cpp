/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:24:11 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): Animal(), _Type("Dog")
{
	std::cout << "WrongCat Default Construct" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &Sample): Animal(), _Type("WrongCat")
{
	std::cout << "WrongCat Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destruct" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat &Sample)
{
	this->_Type = Sample._Type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Le chat fait =-KJscscscSNSHUscscscscacFBHBEWIUFHdcscscssU8FH3jenkbdvdvssdvWI898UYT43TYfssefscscscdscKY9UL9ESD38J9.UMYU65R7F586RC56XE685EC56UYGV653a5yugtuyef" << std::endl;
	return ;
}
