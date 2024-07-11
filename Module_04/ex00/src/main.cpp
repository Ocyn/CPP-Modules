/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/27 17:59:38 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	Test_2( Dog &Buddy )
{
	std::cout << Buddy.getName() << " ! Come on, do something !" << std::endl;
	std::cout << std::endl;
}

void	Test( Cat &Buddy )
{
	std::cout << Buddy.getName() << " ! Come on, do something !" << std::endl;
	std::cout << std::endl;
}

int	main( void )
{
	Dog	Michel("Michel");
	Cat	Didier("Didier");

	for (size_t i = 0; i < 3; i++)
		Test(Michel);
	for (size_t i = 0; i < 3; i++)
		Test(Didier);
	return (0);
}
