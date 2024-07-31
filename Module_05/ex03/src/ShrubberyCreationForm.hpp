/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 14:35:26 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <fstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>

# include "AForm.hpp"

typedef std::string string;

class	Bureaucrat;

class	ShrubberyCreationForm : public AForm {

	public:
		ShrubberyCreationForm		(void);
		ShrubberyCreationForm		(const ShrubberyCreationForm &Sample);
		ShrubberyCreationForm		(const string Target);
		~ShrubberyCreationForm		(void);

		ShrubberyCreationForm&			operator=(const ShrubberyCreationForm &Sample);

		string							getTarget() const;
		void							execute(Bureaucrat const & executor) const;

	private:
		string	_Target;
};

std::ostream	&operator<<(std::ostream &os, const ShrubberyCreationForm &Sample);

#endif
