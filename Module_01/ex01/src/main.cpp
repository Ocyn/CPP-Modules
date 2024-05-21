/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 18:33:18 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	TestHorde( int N, Zombie *Horde )
{
	for (int i = 0; i < N; i++)
		Horde[i].announce();
}

void	KillHorde(Zombie *Horde)
{
	delete [] Horde;
}

int	main(void)
{
	int	size = 3;
	Zombie	*Michels = zombieHorde(size, "Michel");
	TestHorde(size, Michels);
	KillHorde(Michels);
	return (0);
}
