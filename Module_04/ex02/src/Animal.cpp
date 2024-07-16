/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:24:11 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Construct" << std::endl;
	return ;
}

Animal::Animal(const Animal &Sample)
{
	std::cout << "Animal Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destruct" << std::endl;
	return ;
}

Animal&	Animal::operator=(const Animal &Sample)
{
	this->_Type = Sample._Type;
	return (*this);
}

string	Animal::getType() const
{
	return (this->_Type);
}

void	Animal::makeSound() const
{
	std::cout << "L'animal fait du bruit" << std::endl;
	return ;
}
