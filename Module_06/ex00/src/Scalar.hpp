/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/31 17:47:12 by ocyn             ###   ########.fr       */
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

	public:
		Scalar		(void);
		Scalar		(const Scalar &Sample);
		virtual	~Scalar		(void);

		Scalar&		operator=(const Scalar &Sample);

	public:
		static void	convert(string Literal);

	public:
		class	Fail: public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("Operation failed");
				}
		};
};

std::ostream	&operator<<(std::ostream &os, const Scalar &Sample);

#endif
