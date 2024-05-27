/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 22:59:34 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/27 23:52:29 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl construct" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destruct" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string		Levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void			(Harl::*Select[])( void ) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (size_t i = 0; i < 4; i++)
	{
		if (!Levels[i].compare(level))
		{
			(this->*Select[i])();
			// for (size_t i2 = i; i2 > 0; i--)
			// 	(this->*Select[i])();
		}
	}
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
	return ;
}
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}
void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
