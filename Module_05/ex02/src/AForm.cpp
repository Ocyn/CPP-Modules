/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:16:15 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 20:06:53 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): 
_Name("Default"),
_gradeToSign(1),
_gradeToExecute(1)
{
	std::cout << "AForm Default Construct" << std::endl;
	return ;
}

AForm::AForm(const string Name, int gradeToSign, int gradeToExec): 
_Name(Name),
_isSigned(0),
_gradeToSign(gradeToSign), _gradeToExecute(gradeToExec)
{
	std::cout << "AForm Regular Construct" << std::endl;
	if (this->_gradeToSign < 0 || this->_gradeToExecute < 0)
		throw this->lowGradeE;
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw this->highGradeE;
	return ;
}

AForm::AForm(const AForm &Sample):
_Name(Sample._Name),
_gradeToSign(Sample._gradeToSign),
_gradeToExecute(Sample._gradeToExecute)
{
	std::cout << "AForm Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

AForm::~AForm( void )
{
	std::cout << "AForm Destruct" << std::endl;
	return ;
}

AForm&	AForm::operator=(const AForm &Sample)
{
	this->_isSigned = Sample._isSigned;
	return (*this);
}

bool	AForm::ifSigned() const
{
	return (this->_isSigned);
}

void	AForm::beSigned(Bureaucrat &Sample)
{
	this->_isSigned = (Sample.getGrade() <= this->getGradeSign());
	if (this->_isSigned == false)
		throw this->lowGradeE;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->ifSigned() == false)
		throw std::exception();
	if (this->_gradeToExecute < executor.getGrade())
		throw this->lowGradeE;
}

string	AForm::getName() const
{
	return (this->_Name);
}

int	AForm::getGradeSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeExec() const
{
	return (this->_gradeToExecute);
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char * AForm::FormNotSigned::what() const throw()
{
	return ("Form is not signed");
}

std::ostream	&operator<<(std::ostream &os, const AForm &Sample)
{
	os << Sample.getName() << ", ";
	os << "AForm, grades " << Sample.getGradeSign() << " / " << Sample.getGradeExec();
	os << " Sign state: " << Sample.ifSigned();
	os << "\n";
	return (os);
}
