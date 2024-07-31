/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 20:40:04 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>

# include "AForm.hpp"

typedef std::string string;

class	AForm;

class	Bureaucrat {

	public:
		Bureaucrat		(void);
		Bureaucrat		(const Bureaucrat &Sample);
		Bureaucrat		(const string Name, int Grade);
		virtual	~Bureaucrat		(void);

		Bureaucrat&		operator=(const Bureaucrat &Sample);
		string			getName() const;
		int				getGrade() const;
		void			incrementGrade();
		void			decrementGrade();

		void			signForm(AForm &Sample);
		void			executeForm(AForm const & form);

	public:
		class	GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class	GradeTooLowException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

	private:
		const string		_Name;
		int					_Grade;
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &Sample);

#endif
