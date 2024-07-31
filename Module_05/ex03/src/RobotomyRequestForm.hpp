/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 21:26:01 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>
# include <ctime>

# include "AForm.hpp"

typedef std::string string;

class	Bureaucrat;

class	RobotomyRequestForm : public AForm {

	public:
		RobotomyRequestForm		(void);
		RobotomyRequestForm		(const RobotomyRequestForm &Sample);
		RobotomyRequestForm		(const string Target);
		~RobotomyRequestForm	(void);

		RobotomyRequestForm&			operator=(const RobotomyRequestForm &Sample);

		string							getTarget() const;
		void							execute(Bureaucrat const & executor) const;

	private:
		string	_Target;
};

std::ostream	&operator<<(std::ostream &os, const RobotomyRequestForm &Sample);

#endif
