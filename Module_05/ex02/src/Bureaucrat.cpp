/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:24:11 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():
_Name("Default"),
_Grade(150)
{
	std::cout << "Bureaucrat Default Construct" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const string Name, int Grade): 
_Name(Name),
_Grade(150)
{
	std::cout << "Bureaucrat Regular Construct" << std::endl;
	if (Grade < 1)
		throw this->highGradeE;
	if (Grade > 150)
		throw this->lowGradeE;
	this->_Grade = Grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Sample): _Name(Sample._Name)
{
	std::cout << "Bureaucrat Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat Destruct" << std::endl;
	return ;
}

void	Bureaucrat::signForm(AForm &Sample)
{
	try
	{
		Sample.beSigned(*this);
		if (Sample.ifSigned() == true)
			std::cout << this->getName() << " signed " << Sample.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn’t sign " << Sample.getName() << " because " << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn’t execute " << form.getName() << " because " << e.what() << '\n';
	}
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &Sample)
{
	this->_Grade = Sample._Grade;
	return (*this);
}

string	Bureaucrat::getName() const
{
	return (this->_Name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_Grade);
}

void	Bureaucrat::decrementGrade()
{
	if (this->_Grade < 150)
		this->_Grade++;
	else
		throw this->lowGradeE;
	return;
}
void	Bureaucrat::incrementGrade()
{
	if (this->_Grade > 1)
		this->_Grade--;
	else
		throw this->highGradeE;
	return;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &Sample)
{
	os << Sample.getName() << ", ";
	os << "bureaucrat, grade " << Sample.getGrade();
	os << "\n";
	return (os);
}
