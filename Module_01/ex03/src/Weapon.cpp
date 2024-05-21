/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:47:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 19:10:00 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponType)
{
	std::cout << "Weapon Construct" << std::endl;
	this->setType(WeaponType);
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destruct" << std::endl;
}

const std::string	&Weapon::getType()
{
	return ((const std::string &)this->type);
}
	
void	Weapon::setType(std::string type)
{
	this->type = type;
}
