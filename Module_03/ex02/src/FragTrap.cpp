/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/11 19:29:25 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Construct" << std::endl;
	return ;
}

FragTrap::FragTrap( const string Name ): ClapTrap(Name)
{
	std::cout << "FragTrap Construct" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDammages = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &Sample): ClapTrap()
{
	std::cout << "FragTrap Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destruct" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap &Sample)
{
	this->_Name = Sample._Name;
	this->_hitPoints = Sample._hitPoints;
	this->_energyPoints = Sample._energyPoints;
	this->_attackDammages = Sample._attackDammages;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead... Can't do anything " << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << " does not have enough energy points... Sorry" << std::endl;
		return ;
	}
	std::cout << "HIGH FIVE AHAHAHAHAHAHAHHAH YOU GOT IT MA BOIIIIIIIII" << std::endl;
	return ;
}
