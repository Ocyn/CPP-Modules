/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 15:48:35 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define _NB 10

void	Test( void )
{
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

void	GradeCaseTest(Bureaucrat *Jojo)
{
	/*	Testing min limits	*/
	try
	{
		Jojo = new Bureaucrat("Jotaro", 140);
		std::cout << Jojo << std::endl;
		while (Jojo->getGrade() < 150)
			Jojo->decrementGrade();
		std::cout << Jojo << std::endl;
		delete Jojo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete Jojo;
	}
	/*	Testing max limits	*/
	try
	{
		Jojo = new Bureaucrat("Joseph", 8);
		std::cout << Jojo << std::endl;
		while (Jojo->getGrade() > 0)
			Jojo->incrementGrade();
		std::cout << Jojo << std::endl;
		delete Jojo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete Jojo;
	}
}

void	GradesCaseTest(Form	*Brando, Bureaucrat *Jojo)
{
	try
	{
		Brando = new Form("Dio", 140, 40);
		std::cout << Brando << std::endl;
		Brando->beSigned(*Jojo);
		std::cout << Brando << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	std::cout << "\nTEST 1" << std::endl;
	/*	TEST 1	*/

	Bureaucrat *Peal;
	Form		*SeDUCKtive;

	Peal = new Bureaucrat("Quiet", 151);
	SeDUCKtive = new Form("Quiet", 1, 1);
	
	GradeCaseTest(Peal);
	GradesCaseTest(SeDUCKtive, Peal);
	delete Peal;
	delete SeDUCKtive;
}
