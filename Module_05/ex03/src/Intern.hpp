/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 16:05:08 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

typedef std::string string;

class	Bureaucrat;
class	PresidentialPardonForm;
class	RobotomyRequestForm;
class	ShrubberyCreationForm;

class	Intern {

	public:
		Intern		(void);
		Intern		(const Intern &Sample);
		~Intern		(void);

		Intern&			operator=(const Intern &Sample);

		AForm	*makeForm(const string Name, const string Target);

	public:
		class	InvalidName: public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("Invalid Form name");
				}
		};
};

std::ostream	&operator<<(std::ostream &os, const Intern &Sample);

#endif
