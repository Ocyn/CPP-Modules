/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/25 19:36:19 by ocyn             ###   ########.fr       */
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

void	GradesCaseTest(Form	*Brando)
{
	try
	{
		Brando = new Form("Dio", 140, 40);
		std::cout << Brando << std::endl;
		while (Brando->getGradeSign() > 0)
			Brando->incrementGradeToSign();
		std::cout << Brando << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Brando = new Form("Za Warudo", 10, 10);
		std::cout << Brando << std::endl;
		while (Brando->getGradeExec() > 0)
			Brando->incrementGradeToExecute();
		std::cout << Brando << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Brando = new Form("Giorno", 15, 15);
		std::cout << Brando << std::endl;
		while (Brando->getGradeSign() < 150)
			Brando->decrementGradeToExecute();
		std::cout << Brando << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Brando = new Form("Golden Wind", 130, 13);
		std::cout << Brando << std::endl;
		while (Brando->getGradeExec() < 150)
			Brando->decrementGradeToExecute();
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
	delete Peal;
	SeDUCKtive = new Form("Quiet", 1, 1);
	delete SeDUCKtive;
	GradeCaseTest(Peal);
	GradesCaseTest(SeDUCKtive);

	//Test(Peal);
}
