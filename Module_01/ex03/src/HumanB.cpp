/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:28 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 22:33:32 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB Construct" << std::endl;
}

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "HumanB Construct:";
	std::cout << " Name: " << this->_name;
	std::cout << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destruct" << std::endl;
}

void	HumanB::attack( void )
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon): _weapon(weapon)
{
	return ;
}
