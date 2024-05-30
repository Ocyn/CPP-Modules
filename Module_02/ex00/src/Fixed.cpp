/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/30 01:55:59 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed Construct";
	std::cout << std::endl;
}

Fixed::Fixed()
{
	std::cout << "Fixed Construct";
	std::cout << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destruct" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return (this->_RawBits);
}

void	Fixed::setRawBits( int const raw )
{
	(void)raw;
	// this->_RawBits = raw;
	return ;
}

