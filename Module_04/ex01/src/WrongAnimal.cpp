/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/16 21:32:48 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Construct" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(string type): _Type(type)
{
	std::cout << "WrongAnimal 2nd Construct" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Sample)
{
	std::cout << "WrongAnimal Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destruct" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &Sample)
{
	this->_Type = Sample._Type;
	return (*this);
}

string	WrongAnimal::getType() const
{
	return (this->_Type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "L'Animal fait du bruit incoherent car c pas le bon" << std::endl;
	return ;
}
