/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/10 21:15:17 by ocyn             ###   ########.fr       */
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
		Fixed(const Fixed &Sample);
		Fixed(const int Integer);
		Fixed(const float Float);
		Fixed& operator=(const Fixed &Sample);
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator++();
		Fixed& operator--();

		Fixed operator+(const Fixed &Sample) const;
		Fixed operator-(const Fixed &Sample) const;
		Fixed operator*(const Fixed &Sample) const;
		Fixed operator/(const Fixed &Sample) const;

		bool operator<(const Fixed &Sample) const;
		bool operator>(const Fixed &Sample) const;
		bool operator>=(const Fixed &Sample) const;
		bool operator<=(const Fixed &Sample) const;
		bool operator==(const Fixed &Sample) const;
		bool operator!=(const Fixed &Sample) const;

		static Fixed&	min(Fixed &First, Fixed &Second);
		const static Fixed&	min(const Fixed &First, const Fixed &Second);
		static Fixed&	max(Fixed &First, Fixed &Second);
		const static Fixed&	max(const Fixed &First, const Fixed &Second);

		int		getRawBits( void )	const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

};

std::ostream	&operator<<(std::ostream &o, const Fixed &Sample);

#endif
