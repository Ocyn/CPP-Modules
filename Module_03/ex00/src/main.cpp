/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/11 18:21:04 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	Test( ClapTrap &Buddy )
{
	std::cout << Buddy.getName() << " ! Come on, do something !" << std::endl;
	Buddy.attack(" Sheshounet ");
	Buddy.takeDamage(2);
	Buddy.beRepaired(1);
}

int	main( void )
{
	ClapTrap	Michel("Michel");
	ClapTrap	Didier("Didier");
	ClapTrap	MichMich(Michel);
	
	Test(Michel);
	Test(Didier);
	Test(MichMich);
	return (0);
}
