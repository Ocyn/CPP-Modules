/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/17 17:44:38 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>

typedef std::string string;

class	Bureaucrat {

	public:
		Bureaucrat		(void);
		Bureaucrat		(const Bureaucrat &Sample);
		Bureaucrat		(const string Name, int Grade);
		virtual	~Bureaucrat		(void);

		Bureaucrat&		operator=(const Bureaucrat &Sample);
		string			getName() const;
		int				getGrade() const;

	private:
		const string		_Name;
		int					_Grade;
};

#endif
