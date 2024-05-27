/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:47:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/23 17:07:39 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponType): _type(WeaponType)
{
	std::cout << "Weapon Construct";
	std::cout << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destruct" << std::endl;
}


const std::string	&Weapon::getType()
{
	return (this->_type);
}
	
void	Weapon::setType(std::string type)
{
	this->_type = type;
}
