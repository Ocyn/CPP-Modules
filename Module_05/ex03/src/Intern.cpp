/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:16:15 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 16:33:56 by ocyn             ###   ########.fr       */
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

	int	i = -1;

	while (++i < 3)
		if (!Name.compare(Type[i]))
			break;
	if (i < 3)
		std::cout << "Intern creates " << Name << std::endl;
	switch (i)
	{
	case 0:
		Form = new PresidentialPardonForm(Target);
		break;
	case 1:
		Form = new RobotomyRequestForm(Target);
		break;
	case 2:
		Form = new ShrubberyCreationForm(Target);
		break;
	default:
		throw	Intern::InvalidName();
		break;
	}
	return (Form);
}

std::ostream	&operator<<(std::ostream &os, const Intern &Sample)
{
	(void) Sample;
	os << "Just an intern, who care about them ? ";
	os << "\n";
	return (os);
}
