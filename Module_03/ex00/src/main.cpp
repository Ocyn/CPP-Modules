/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/11 19:50:27 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	ClapTrap	MichMich(Michel);
	
	for (size_t i = 0; i < 10; i++)
		Test(Michel);
	for (size_t i = 0; i < 10; i++)
		Test(Didier);
	for (size_t i = 0; i < 10; i++)
		Test(MichMich);
	return (0);
}
