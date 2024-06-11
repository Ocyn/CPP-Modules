/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/03 19:11:02 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "Fixed.hpp"

# include <iostream>
# include <cstdlib>
# include <cstring>

class	Fixed
{
	private:
		int					_bitValue;
		const static	int	_bitNumber = 8;
	public:
		Fixed();
		Fixed(Fixed &instance);
		Fixed& operator=(const Fixed &instance);
		~Fixed();
		int		getRawBits( void )	const;
		void	setRawBits( int const raw );
};

#endif