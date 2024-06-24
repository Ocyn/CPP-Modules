/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 15:44:22 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	Test_3( FragTrap &Buddy )
{
	std::cout << Buddy.getName() << " ! Come on, do something !" << std::endl;
	Buddy.attack(" Cecillia Ciotti ");
	Buddy.takeDamage(3);
	Buddy.beRepaired(1);
	Buddy.highFivesGuys();
	std::cout << std::endl;
}

void	Test_2( ScavTrap &Buddy )
{
	std::cout << Buddy.getName() << " ! Come on, do something !" << std::endl;
	Buddy.attack(" Sheshounet ");
	Buddy.takeDamage(3);
	Buddy.beRepaired(1);
	Buddy.guardGate();
	std::cout << std::endl;
}

void	Test( ClapTrap &Buddy )
{
	std::cout << Buddy.getName() << " ! Come on, do something !" << std::endl;
	Buddy.attack(" Sheshounet ");
	Buddy.takeDamage(3);
	Buddy.beRepaired(1);
	std::cout << std::endl;
}

int	main( void )
{
	ClapTrap	Michel("Michel");
	ClapTrap	Didier("Didier");

	for (size_t i = 0; i < 3; i++)
		Test(Michel);
	for (size_t i = 0; i < 3; i++)
		Test(Didier);
	
	ScavTrap	Bruno("Bruno");

	for (size_t i = 0; i < 3; i++)
		Test_2(Bruno);
	Bruno.guardGate();
	return (0);
}
