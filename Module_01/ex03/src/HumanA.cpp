/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 19:19:41 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon)
{
	std::cout << "HumanA Construct" << std::endl;
	this->setName(name);
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destruct" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	std::cout << this->weapon.getType();
	std::cout << std::endl;
	return ;
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

void	HumanA::setWeapon(const Weapon &weapon)
{
	this->weapon = weapon;
}
