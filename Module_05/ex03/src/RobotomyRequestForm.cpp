/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:16:15 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 15:05:23 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): 
AForm("RobotomyRequestForm", 72, 45),
_Target("Default")
{
	std::cout << "RobotomyRequestForm Default Construct" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const string Target): 
AForm("RobotomyRequestForm", 72, 45),
_Target(Target)
{
	std::cout << "RobotomyRequestForm Regular Construct" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &Sample):
AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequestForm Destruct" << std::endl;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &Sample)
{
	this->_Target = Sample._Target;
	return (*this);
}

string	RobotomyRequestForm::getTarget() const
{
	return (this->_Target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkValidity(executor);
	std::cout << " * DRILLING NOISES * \n";
	if (std::rand() % 2 == 1)
		std::cout << this->getTarget() << " has been robotomized successfully !" << std::endl;
	else
		std::cout << "Robotomy attempt on " << this->getTarget() << " failed..." << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const RobotomyRequestForm &Sample)
{
	os << Sample.getName() << ", ";
	os << "RobotomyRequestForm, grades " << Sample.getGradeSign() << " / " << Sample.getGradeExec();
	os << ", Sign state: " << Sample.ifSigned();
	os << ", Target: " << Sample.getTarget();
	os << "\n";
	return (os);
}
