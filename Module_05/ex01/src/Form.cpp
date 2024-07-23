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

#include "Form.hpp"

Form::Form()
{
	std::cout << "Form Default Construct" << std::endl;
	return ;
}

Form::Form(const string Name, int gradeToSign, int gradeToExec): 
_Name(Name), 
_gradeToSign(1), _gradeToExecute(1), 
_isSigned(0)
{
	std::cout << "Form 2nd Construct" << std::endl;
	if (gradeToSign < 0 || gradeToExec < 0)
		throw this->lowGradeE;
	if (gradeToSign > 150 || gradeToSign > 150)
		throw this->highGradeE;
	this->_gradeToSign = gradeToSign;
	this->_gradeToExecute = gradeToExec;
	return ;
}

Form::Form(const Form &Sample): _Name(Sample._Name)
{
	std::cout << "Form Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Form::~Form( void )
{
	std::cout << "Form Destruct" << std::endl;
	return ;
}

Form&	Form::operator=(const Form &Sample)
{
	this->_gradeToSign = Sample._gradeToSign;
	this->_gradeToExecute = Sample._gradeToExecute;
	return (*this);
}

string	Form::getName() const
{
	return (this->_Name);
}

int	Form::getGradeSign() const
{
	return (this->_gradeToSign);
}

int	Form::getGradeExec() const
{
	return (this->_gradeToExecute);
}

void	Form::decrementGradeToSign()
{
	if (this->_gradeToSign < 150)
		this->_gradeToSign++;
	else
		throw this->lowGradeE;
	return;
}
void	Form::incrementGradeToSign()
{
	if (this->_gradeToSign > 1)
		this->_gradeToSign--;
	else
		throw this->highGradeE;
	return;
}

void	Form::decrementGradeToExecute()
{
	if (this->_gradeToExecute < 150)
		this->_gradeToExecute++;
	else
		throw this->lowGradeE;
	return;
}
void	Form::incrementGradeToExecute()
{
	if (this->_gradeToExecute > 1)
		this->_gradeToExecute--;
	else
		throw this->highGradeE;
	return;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Cannot decrement or set grade to a value above of 150");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Cannot increment or set grade to a value below of 1");
}

std::ostream	&operator<<(std::ostream &os, const Form &Sample)
{
	os << Sample.getName() << ", ";
	os << "form grade " << Sample.getGrade();
	return (os);
}