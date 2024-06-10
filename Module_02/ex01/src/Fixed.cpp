/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/10 14:56:32 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _bitValue(0)
{
	std::cout << "Fixed Default Construct";
	std::cout << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Default Destruct" << std::endl;
}

Fixed::Fixed(const float Float): _bitValue(Float)
{
	std::cout << "Fixed float Construct";
	std::cout << std::endl;
}

Fixed::Fixed(const int Integer): _bitValue(Integer)
{
	std::cout << "Fixed integer Construct";
	std::cout << std::endl;
}

Fixed& Fixed::operator=(const Fixed &Sample)
{
	std::cout << "Fixed Operator= Overload";
	std::cout << std::endl;
	if (this != &Sample)
		this->_bitValue = Sample._bitValue;
	return (*this);
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

std::ostream	&operator<<(std::ostream &os, const Fixed &Sample)
{
	std::cout << "Ostream << Operator Overload";
	std::cout << std::endl;
	(void)Sample;
	return (os);
}

float	Fixed::toFloat( void ) const
{
	return (this->getRawBits());
}

int		Fixed::toInt( void ) const
{
	return (this->getRawBits());
}
