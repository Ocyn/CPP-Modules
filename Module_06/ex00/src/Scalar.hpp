/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/07 16:00:17 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <cmath>
# include <limits>

typedef std::string string;

class	ScalarConverter {

	private:
		ScalarConverter		(void);
		ScalarConverter		(const ScalarConverter &Sample);
		~ScalarConverter		(void);
		ScalarConverter&		operator=(const ScalarConverter &Sample);

		static void	convertChar(string	Literal) ;
		static void	convertInt(string	Literal);
		static void	convertFloat(string	Literal);
		static void	convertDouble(string	Literal);

		static void	printChar(string Literal);
		static void	printInt(string Literal);
		static void	printFloat(string Literal);
		static void	printDouble(string Literal);

		static char		_char;
		static int		_int;
		static float	_float;
		static double	_double;

	public:
		static void	convert(string Literal);
};

std::ostream	&operator<<(std::ostream &os, const ScalarConverter &Sample);

#endif
