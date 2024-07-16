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

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Default Construct" << std::endl;
	return ;
}

Cat::Cat(const Cat &Sample): Animal("Cat")
{
	std::cout << "Cat Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destruct" << std::endl;
	return ;
}

Cat&	Cat::operator=(const Cat &Sample)
{
	this->_Type = Sample._Type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Le chat fait Mew mew" << std::endl;
	return ;
}
