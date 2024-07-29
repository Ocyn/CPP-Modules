/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 19:27:36 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>

# include "Bureaucrat.hpp"

typedef std::string string;

class	Bureaucrat;

class	Form {

	public:
		Form		(void);
		Form		(const Form &Sample);
		Form		(const string Name, int _gradeToSign, int gradeToExec);
		virtual	~Form		(void);

		Form&			operator=(const Form &Sample);
		string			getName() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		bool			ifSigned() const;

		void			beSigned(Bureaucrat &Sample);

	public:
		class	GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class	GradeTooLowException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

	public:
		Form::GradeTooLowException	lowGradeE;
		Form::GradeTooHighException	highGradeE;

	private:
		const string		_Name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream	&operator<<(std::ostream &os, const Form &Sample);

#endif
