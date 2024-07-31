/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:16:15 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 15:06:12 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
AForm("PresidentialPardonForm", 25, 5),
_Target("Default")
{
	std::cout << "PresidentialPardonForm Default Construct" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const string Target): 
AForm("PresidentialPardonForm", 25, 5),
_Target(Target)
{
	std::cout << "PresidentialPardonForm Regular Construct" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &Sample):
AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm Destruct" << std::endl;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &Sample)
{
	this->_Target = Sample._Target;
	return (*this);
}

string	PresidentialPardonForm::getTarget() const
{
	return (this->_Target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkValidity(executor);
	std::cout << this->getName() << " informs that " << this->getTarget();
	std::cout << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const PresidentialPardonForm &Sample)
{
	os << Sample.getName() << ", ";
	os << "PresidentialPardonForm, grades " << Sample.getGradeSign() << " / " << Sample.getGradeExec();
	os << ", Sign state: " << Sample.ifSigned();
	os << ", Target: " << Sample.getTarget();
	os << "\n";
	return (os);
}
