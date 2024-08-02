/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/08/02 15:08:53 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <stdexcept>

typedef std::string string;

class	Scalar {

	private:
		Scalar		(void);
		Scalar		(const Scalar &Sample);
	public:
		~Scalar		(void);

		Scalar&		operator=(const Scalar &Sample);

	public:
		static void	*convert(string Literal);

	public:
		class	Impossible: public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("Impossible");
				}
		};
		class	NotDisplayableInput: public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("Not displayable input");
				}
		};
		class	NotANumber: public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("nan");
				}
		};
		class	NotAFloatNumber: public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("nanf");
				}
		};
};

std::ostream	&operator<<(std::ostream &os, const Scalar &Sample);

#endif
