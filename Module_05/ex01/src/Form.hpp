/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/23 16:19:40 by ocyn             ###   ########.fr       */
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

typedef std::string string;

class	Form {

	public:
		Form		(void);
		Form		(const Form &Sample);
		Form		(const string Name, int _gradeToSign, int gradeToExec);
		virtual	~Form		(void);

		Form&		operator=(const Form &Sample);
		string			getName() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		void			incrementGradeToSign();
		void			decrementGradeToSign();
		void			incrementGradeToExecute();
		void			decrementGradeToExecute();

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
		int					_gradeToSign;
		int					_gradeToExecute;
};

std::ostream	&operator<<(std::ostream &os, const Form &Sample);

#endif
