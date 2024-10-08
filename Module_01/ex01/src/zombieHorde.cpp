/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:58:46 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 18:31:10 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*Horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		Horde[i].Set_name(name);
	return (Horde);
}
