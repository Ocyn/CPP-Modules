/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/08/02 13:05:48 by ocyn             ###   ########.fr       */
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
# include <boost/lexical_cast.hpp>

typedef std::string string;

class	Scalar {

	private:
		Scalar		(void);
		Scalar		(const Scalar &Sample);
	public:
		~Scalar		(void);

		Scalar&		operator=(const Scalar &Sample);

	public:
		static void	convert(string Literal);

	public:
		class	Impossible: public boost::bad_lexical_cast {
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
};

std::ostream	&operator<<(std::ostream &os, const Scalar &Sample);

#endif
