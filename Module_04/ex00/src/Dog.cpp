/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/16 21:32:46 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default Construct" << std::endl;
	return ;
}

Dog::Dog(const Dog &Sample): Animal("Dog")
{
	std::cout << "Dog Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destruct" << std::endl;
	return ;
}

Dog&	Dog::operator=(const Dog &Sample)
{
	this->_Type = Sample._Type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Le chien fait Waf Waf" << std::endl;
	return ;
}
