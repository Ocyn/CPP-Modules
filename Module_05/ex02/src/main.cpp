/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 20:59:54 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

#define _NB 10

void	ExecuteCaseTest()
{
	// Valid grade test (should success)

	try
	{
		PresidentialPardonForm	Brando("Pucci");
		std::cout << Brando << std::endl;

		Bureaucrat Jojo("Jotaro", 10);
		std::cout << Jojo << std::endl;

		//	This signature attempt should success without any error throwing
		Jojo.signForm(Brando);
		std::cout << Brando << std::endl;
		Jojo.executeForm(Brando);
	}
	catch(const std::exception& e)
	{
		// Error grade too low throwed if Bureaucrat's grade not high enough
		std::cerr << "Error: " << e.what() << '\n';
	}

	// Invalid grade test (should fail)
	// Valid grade test (should success)
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
	ExecuteCaseTest();
}
