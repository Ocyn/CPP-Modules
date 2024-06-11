/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/04 17:15:48 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _bitValue(0)
{
	std::cout << "Fixed Default Construct";
	std::cout << std::endl;
}

Fixed::Fixed(Fixed &instance): _bitValue(0)
{
	std::cout << "Fixed Recopy Construct";
	std::cout << std::endl;
	this->operator=(instance);
}

Fixed& Fixed::operator=(const Fixed &instance)
{
	std::cout << "Fixed Recopy Assignment Operator Construct";
	std::cout << std::endl;
	if (this != &instance)
	{
		this->_bitValue = instance._bitValue;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destruct" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return (this->_bitValue);
}

void	Fixed::setRawBits( int const raw )
{
	(void)raw;
	this->_bitValue = raw;
	return ;
}

