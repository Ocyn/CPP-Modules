/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/18 13:29:28 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define _NB 10

void	Test( Bureaucrat &Peal )
{
	std::cout << Peal.getName() << ":" << Peal.getGrade() << std::endl;
	std::cout << std::endl;
}


int main()
{
	std::cout << "\nTEST 1" << std::endl;
	/*	TEST 1	*/

	Bureaucrat Peal("Michel", 99);

	Bureaucrat	*Yo;

	try
	{
		Yo = new Bureaucrat("Jojo", 8);
		Test(*Yo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Test(Peal);

	delete Yo;
}
