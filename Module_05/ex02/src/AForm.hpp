/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 14:52:03 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>

# include "Bureaucrat.hpp"

typedef std::string string;

class	Bureaucrat;

class	AForm {

	public:
		AForm		(void);
		AForm		(const AForm &Sample);
		AForm		(const string Name, int _gradeToSign, int gradeToExec);
		virtual	~AForm		(void);

		AForm&			operator=(const AForm &Sample);
		string			getName() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		bool			ifSigned() const;
		void			checkValidity(Bureaucrat const & executor) const;

		void			beSigned(Bureaucrat &Sample);
		virtual void	execute(Bureaucrat const & executor) const = 0;

	public:
		class	GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class	GradeTooLowException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class	FormNotSignedException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

	private:
		const string		_Name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream	&operator<<(std::ostream &os, const AForm &Sample);

#endif
