/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:28 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 19:20:21 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "HumanB Construct" << std::endl;
	this->setName(name);
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destruct" << std::endl;
}

void	HumanB::attack( void )
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	std::cout << this->weapon.getType();
	std::cout << std::endl;
	return ;
}

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = weapon;
}
