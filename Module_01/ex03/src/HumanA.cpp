/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 22:37:46 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( void )
{
	std::cout << "HumanA Construct" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanA Construct:";
	std::cout << " Name: " << this->_name;
	std::cout << " Weapon: " << this->_weapon.getType();
	std::cout << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destruct" << std::endl;
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
	return ;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}
