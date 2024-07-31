/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:16:15 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 21:19:53 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Construct" << std::endl;
	return ;
}

Intern::Intern(const Intern &Sample)
{
	std::cout << "Intern Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Intern::~Intern( void )
{
	std::cout << "Intern Destruct" << std::endl;
	return ;
}

Intern&	Intern::operator=(const Intern &Sample)
{
	(void)Sample;
	return (*this);
}

AForm	*Intern::makeForm(const string Name, const string Target)
{
	AForm	*Form;
	string	Type[] = {
	"Presidential Pardon",
	"Robotomy Request",
	"Shrubbery Creation",
	};
	AForm	*(Intern::*Select[]) (const string) =
	{
		&Intern::CreatePresidentPardonForm,
		&Intern::CreateRobotomyRequestFrom,
		&Intern::CreateShrubberyCreationForm
	};
	for (int i = 0; i < 3; i++)
	{
		if (!Type[i].compare(Name))
		{
			std::cout << "Intern creates " << Name << std::endl;
			Form = (this->*Select[i])(Target) ;
			return (Form);
		}
	}
	throw Intern::InvalidName();
	return (Form);
}

AForm	*Intern::CreatePresidentPardonForm(const string Target)
{
	return (new PresidentialPardonForm(Target));
}
AForm	*Intern::CreateRobotomyRequestFrom(const string Target)
{
	return (new RobotomyRequestForm(Target));
}
AForm	*Intern::CreateShrubberyCreationForm(const string Target)
{
	return (new ShrubberyCreationForm(Target));
}

std::ostream	&operator<<(std::ostream &os, const Intern &Sample)
{
	(void) Sample;
	os << "Just an intern, who care about them ? ";
	os << "\n";
	return (os);
}
