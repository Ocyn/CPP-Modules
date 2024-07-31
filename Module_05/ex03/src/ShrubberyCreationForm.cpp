/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:16:15 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 15:06:06 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): 
AForm("ShrubberyCreationForm", 145, 137),
_Target("Default")
{
	std::cout << "ShrubberyCreationForm Default Construct" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const string Target): 
AForm("ShrubberyCreationForm", 145, 137),
_Target(Target)
{
	std::cout << "ShrubberyCreationForm Regular Construct" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Sample):
AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm Destruct" << std::endl;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Sample)
{
	this->_Target = Sample._Target;
	return (*this);
}

string	ShrubberyCreationForm::getTarget() const
{
	return (this->_Target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkValidity(executor);
	string			FileName = this->getTarget().append("_shrubbery");
	std::ofstream	Outfile(FileName.c_str());
	Outfile << "               ,@@@@@@@,\n";
	Outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	Outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	Outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	Outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	Outfile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	Outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	Outfile << "       |o|        | |         | |\n";
	Outfile << "       |.|        | |         | |\n";
	Outfile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
	Outfile.close();
}

std::ostream	&operator<<(std::ostream &os, const ShrubberyCreationForm &Sample)
{
	os << Sample.getName() << ", ";
	os << "ShrubberyCreationForm, grades " << Sample.getGradeSign() << " / " << Sample.getGradeExec();
	os << ", Sign state: " << Sample.ifSigned();
	os << ", Target: " << Sample.getTarget();
	os << "\n";
	return (os);
}
