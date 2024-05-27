/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:35:33 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/23 17:09:45 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	Michel()
{
	Weapon club = Weapon("crude spiked club");
	HumanA Michel("Michel", club);
	Michel.attack();
	club.setType("some other type of club");
	Michel.attack();
	club.setType("l'enorme zizi de sheshounet");
	Michel.attack();
}

void	Didier()
{
	Weapon club = Weapon("crude spiked club");
	HumanB Didier("Didier");
	Didier.setWeapon(club);
	Didier.attack();
	club.setType("some other type of club");
	Didier.attack();
	club.setType("l'enorme zizi de sheshounet");
	Didier.attack();
}

int main()
{
	Michel();
	Didier();
	return 0;
}
