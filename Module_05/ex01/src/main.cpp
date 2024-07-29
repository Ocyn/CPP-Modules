/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 19:20:42 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

#define _NB 10

void	BadAssignTest( void )
{
	/*	
		Out of bound assignation test
		Espected behavior: Throwing grade assignation error
	*/
	Bureaucrat	*Yo;
	try
	{
		Yo = new Bureaucrat("Jojo", 151);
		std::cout << Yo << std::endl;
		delete Yo;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Wesh \?\?!!  " << e.what() << '\n';
	}
}

void	GradeCaseTest()
{
	Bureaucrat	*Jojo;

	/*	Testing min limits	*/
	try
	{
		Jojo = new Bureaucrat("Jotaro", 140);
		std::cout << *Jojo << std::endl;

		while (Jojo->getGrade() < 150)
			Jojo->decrementGrade();

		std::cout << Jojo << std::endl;
		delete Jojo;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		delete Jojo;
	}
	/*	Testing max limits	*/
	try
	{
		Jojo = new Bureaucrat("Joseph", 8);
		std::cout << *Jojo << std::endl;

		while (Jojo->getGrade() > 0)
			Jojo->incrementGrade();

		std::cout << *Jojo << std::endl;
		delete Jojo;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		delete Jojo;
	}
}

void	SignCaseTest()
{
	// Valid grade test (should success)

	try
	{
		Form	Brando("Dio", 140, 40);
		std::cout << Brando << std::endl;

		Bureaucrat Jojo("Jotaro", 90);
		std::cout << Jojo << std::endl;

		//	This signature attempt should success without any error throwing
		Jojo.signForm(Brando);
		std::cout << Brando << std::endl;
	}
	catch(const std::exception& e)
	{
		// Error grade too low throwed if Bureaucrat's grade not high enough
		std::cerr << "Error: " << e.what() << '\n';
	}

	// Invalid grade test (should fail)
	// Valid grade test (should success)

	try
	{
		Form	Brando("Dio", 140, 40);
		std::cout << Brando << std::endl;

		Bureaucrat Jojo("Jotaro", 141);
		std::cout << Jojo << std::endl;

		//	This signature attempt should success without any error throwing
		Jojo.signForm(Brando);
		std::cout << Brando << std::endl;
	}
	catch(const std::exception& e)
	{
		// Error grade too low throwed if Bureaucrat's grade not high enough
		std::cerr << "Error: " << e.what() << '\n';
	}
}

int main()
{
	// std::cout << "\nTEST 1" << std::endl;
	// /*	
	// 	Out of bound grading test

	// 	Espected behavior: Throwing grade error
	// */
	// GradeCaseTest();

	std::cout << "\nTEST 2" << std::endl;
	/*	
		Form be signed by Bureaucrat test
		
		Espected behavior: Form sign if Bureaucrat's grade high enough,
		throwing grade error if grade too low
	*/
	SignCaseTest();
}
