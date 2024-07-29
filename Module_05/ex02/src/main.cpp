/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 23:45:58 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

#define _NB 10

/*
Please provide: 
	1- Form reference (Initialized before calling the function)
	2- Grade (of the Bureaucrat, change it to test Grade checking for signature and execution)
	3- ExecutesRepetitions (the number of times the Form gonna be executed by the Bureaucrat)
*/
void	SignAndExecuteTest(AForm &Brando, int Grade, size_t ExecutesRepetition)
{
	// Valid grade test (should success)

	try
	{
		std::cout << Brando << std::endl;

		Bureaucrat Jojo("Jotaro", Grade);
		std::cout << Jojo << std::endl;

		//	This signature attempt should success without any error throwing
		Jojo.signForm(Brando);
		std::cout << Brando << std::endl;
		for (size_t i = 0; i < ExecutesRepetition; i++)
			Jojo.executeForm(Brando);
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
	PresidentialPardonForm	Brando("Pucci");
	RobotomyRequestForm		Speedwagon("Stroheim");
	SignAndExecuteTest(Brando, 1, 1);
	SignAndExecuteTest(Speedwagon, 1, 3);
	return (0);
}
