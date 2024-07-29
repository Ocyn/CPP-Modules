/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:16:15 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 19:28:20 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): 
_Name("Default"),
_gradeToSign(1),
_gradeToExecute(1)
{
	std::cout << "Form Default Construct" << std::endl;
	return ;
}

Form::Form(const string Name, int gradeToSign, int gradeToExec): 
_Name(Name), 
_isSigned(0),
_gradeToSign(gradeToSign), _gradeToExecute(gradeToExec)
{
	std::cout << "Form Regular Construct" << std::endl;
	if (this->_gradeToSign < 0 || this->_gradeToExecute < 0)
		throw this->lowGradeE;
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw this->highGradeE;
	return ;
}

Form::Form(const Form &Sample): 
_Name(Sample._Name), 
_gradeToSign(Sample._gradeToSign),
_gradeToExecute(Sample._gradeToExecute)
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
	this->_isSigned = Sample._isSigned;
	return (*this);
}

bool	Form::ifSigned() const
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat &Sample)
{
	this->_isSigned = (Sample.getGrade() <= this->getGradeSign());
	if (this->_isSigned == false)
		throw this->lowGradeE;
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

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &os, const Form &Sample)
{
	os << Sample.getName() << ", ";
	os << "form, grades " << Sample.getGradeSign() << " / " << Sample.getGradeExec();
	os << " Sign state: " << Sample.ifSigned();
	os << "\n";
	return (os);
}
