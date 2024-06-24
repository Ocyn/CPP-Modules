/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:34:12 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Construct" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const string Name ): ClapTrap(Name)
{
	std::cout << "ScavTrap Construct" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDammages = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &Sample): ClapTrap()
{
	std::cout << "ScavTrap Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destruct" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &Sample)
{
	this->_Name = Sample._Name;
	this->_hitPoints = Sample._hitPoints;
	this->_energyPoints = Sample._energyPoints;
	this->_attackDammages = Sample._attackDammages;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "GATE KEEPER MODE !!!" << std::endl;
	return ;
}
