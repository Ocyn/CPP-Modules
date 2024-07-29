/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/29 20:44:20 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>

# include "AForm.hpp"

typedef std::string string;

class	Bureaucrat;

class	PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm		(void);
		PresidentialPardonForm		(const PresidentialPardonForm &Sample);
		PresidentialPardonForm		(const string Target);
		~PresidentialPardonForm		(void);

		PresidentialPardonForm&			operator=(const PresidentialPardonForm &Sample);

		void							execute(Bureaucrat const & executor) const;

	private:
		string	_Target;
};

std::ostream	&operator<<(std::ostream &os, const PresidentialPardonForm &Sample);

#endif
