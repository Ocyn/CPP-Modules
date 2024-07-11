/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/11 19:35:20 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Construct" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const string Name ): 
_Name(Name), 
_hitPoints(100),
_energyPoints(10),
_attackDammages(0)
{
	std::cout << "ClapTrap Construct" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &Sample)
{
	std::cout << "ClapTrap Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destruct" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &Sample)
{
	this->_Name = Sample._Name;
	this->_hitPoints = Sample._hitPoints;
	this->_energyPoints = Sample._energyPoints;
	this->_attackDammages = Sample._attackDammages;
	return (*this);
}

void	ClapTrap::attack(const string& target)
{
	std::cout << "ClapTrap " << this->_Name;
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead... Can't do anything " << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << " doest not have enough energy points... Sorry" << std::endl;
		return ;
	}
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackDammages;
	std::cout << " points of damage !" << std::endl;
	this->energyCost(1);
	std::cout << "He got now " << this->_energyPoints << " Energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_Name;
	if (this->_hitPoints <= 0)
	{
		std::cout << " is already dead... Attacking it again is useless. " << std::endl;
		return ;
	}
	std::cout << " has been attacked ";
	std::cout << ", causing " << amount;
	std::cout << " points of damage !" << std::endl;
	this->_hitPoints -= amount;
	std::cout << "He got now " << this->_hitPoints << " Health points" << std::endl;
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " just died... RIP lol" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_Name;
	if (this->_hitPoints - amount <= 0)
	{
		std::cout << " is already dead... Attacking it again is useless. " << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << " doest not have enough energy points... Sorry" << std::endl;
		return ;
	}
	std::cout << " has been repaired ";
	std::cout << ", restauring " << amount;
	std::cout << " points of health !" << std::endl;
	this->_hitPoints += amount;
	std::cout << "He got now " << this->_hitPoints << " Health points" << std::endl;
	this->energyCost(1);
	std::cout << "And " << this->_energyPoints << " Energy points" << std::endl;
}

const string	ClapTrap::getName() const
{
	return (this->_Name);
}

void	ClapTrap::energyCost(unsigned int amount)
{
	if (this->_energyPoints <= 0)
		return ;
	this->_energyPoints -= amount;
}
