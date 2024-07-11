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

Dog::Dog(): _Type("Dog")
{
	std::cout << "Dog Default Construct" << std::endl;
	return ;
}

Dog::Dog(const Dog &Sample): _Type("Dog")
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
	this->_Name = Sample._Name;
	return (*this);
}
