/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:30 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/30 01:53:39 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Fixed.hpp"

# include <iostream>
# include <cstdlib>
# include <cstring>

class	Fixed
{
	private:
		int					_Bits;
		const static	int	_RawBits;
	public:
		Fixed();
		~Fixed();
		int		getRawBits( void )	const;
		void	setRawBits( int const raw );
};

#endif