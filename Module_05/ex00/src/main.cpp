/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 20:01:08 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define _NB 10

void	Show( Bureaucrat &Peal )
{
	std::cout << Peal;
	std::cout << std::endl;
}

void	lowCaseTest(Bureaucrat *Jojo, int Grade)
{
	try
	{
		Jojo = new Bureaucrat("Jotaro", Grade);
		Show(*Jojo);
		while (Jojo->getGrade() > 0)
			Jojo->decrementGrade();
		Show(*Jojo);
		delete Jojo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete Jojo;
	}
}

void	HighCaseTest(Bureaucrat *Jojo, int Grade)
{
	try
	{
		Jojo = new Bureaucrat("Joseph", Grade);
		Show(*Jojo);
		while (Jojo->getGrade() < 150)
			Jojo->incrementGrade();
		Show(*Jojo);
		delete Jojo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete Jojo;
	}
}

int main()
{
	std::cout << "\nTEST 1" << std::endl;
	/*	TEST 1	*/

	Bureaucrat Peal("Michel", 99);

	Bureaucrat	*Yo;

	try
	{
		Yo = new Bureaucrat("Jojo", 151);
		Show(*Yo);
		delete Yo;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Wesh \?\?!!  " << e.what() << '\n';
	}
	//lowCaseTest(Yo, 17);
	//HighCaseTest(Yo, 99);

	//Show(Peal);
}
