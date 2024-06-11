/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/11 18:25:40 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const string Name ): _Name(Name)
{
	std::cout << "ClapTrap Construct" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDammages = 0;
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
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackDammages;
	std::cout << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_Name;
	std::cout << " has been attacked ";
	std::cout << ", causing " << amount;
	std::cout << " points of damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_Name;
	std::cout << " has been repaired ";
	std::cout << ", restauring " << amount;
	std::cout << " points of health !" << std::endl;
}

const string	ClapTrap::getName()
{
	return (this->_Name);
}

