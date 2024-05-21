/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:47:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 22:35:16 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon Construct" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destruct" << std::endl;
}

Weapon::Weapon(std::string WeaponType): _type(WeaponType)
{
	std::cout << "Weapon Construct: ";
	std::cout << " Type: " << this->getType();
	std::cout << std::endl;
}

const std::string	&Weapon::getType()
{
	return ((const std::string &)this->_type);
}
	
void	Weapon::setType(std::string type)
{
	this->_type = type;
}
