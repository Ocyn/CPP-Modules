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

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Construct" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const string Name, int Grade): 
_Name(Name), _Grade(Grade)
{
	std::cout << "Bureaucrat 2nd Construct" << std::endl;
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
