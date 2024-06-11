/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/11 17:36:58 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	Test( ClapTrap &Buddy )
{
	std::cout << Buddy.getName() << " ! Come on, do something !" << std::endl;
	
}

int	main( void )
{
	ClapTrap	Michel("Michel");
	ClapTrap	Didier("Didier");
	ClapTrap	MichMich(Michel);
	
	Test();
	return (0);
}
