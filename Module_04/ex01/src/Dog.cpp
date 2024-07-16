/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:24:11 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), _Type("Dog")
{
	this->_Brain = new Brain();
	std::cout << "Dog Default Construct" << std::endl;
	return ;
}

Dog::Dog(const Dog &Sample): Animal()
{
	std::cout << "Dog Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destruct" << std::endl;
	delete this->_Brain;
	return ;
}

Dog&	Dog::operator=(const Dog &Sample)
{
	this->_Type = Sample._Type;
	this->_Brain = Sample._Brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Le chien fait Waf Waf" << std::endl;
	return ;
}
