/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 17:37:27 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Zombie Construct" << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie Destruct" << std::endl;
	return ;
}

void	Zombie::Set_name( std::string Set )
{
	this->Name = Set;
}

std::string	Zombie::Get_name( void )
{
	return(this->Name);
}

void	Zombie::announce( void )
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

