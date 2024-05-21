/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:58:46 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 17:58:58 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*Horde = new Zombie[N];
	
	for (size_t i = 0; i < N; i++)
		Horde->Set_name(name);
	return (Horde);
}
