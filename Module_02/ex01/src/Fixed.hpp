/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/10 14:47:05 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "Fixed.hpp"

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <cmath>

class	Fixed
{
	private:
		int					_bitValue;
		const static	int	_bitNumber = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int Integer);
		Fixed(const float Float);
		Fixed& operator=(const Fixed &Sample);
		int		getRawBits( void )	const;
		void	setRawBits( int const raw );
float	toFloat( void ) const;
int		toInt( void ) const;

};

std::ostream	&operator<<(std::ostream &o, const Fixed &Sample);

#endif
