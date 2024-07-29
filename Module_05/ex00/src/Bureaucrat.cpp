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
_Name(Name), _Grade(1)
{
	std::cout << "Bureaucrat Regular Construct" << std::endl;
	if (Grade < 0)
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
	return ("Cannot decrement or set grade to a value above of 150");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Cannot increment or set grade to a value below of 1");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &Sample)
{
	os << Sample.getName() << ", ";
	os << "bureaucrat grade " << Sample.getGrade();
	return (os);
}
