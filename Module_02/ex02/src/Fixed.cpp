/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/10 21:15:39 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _bitValue(0)
{
	// std::cout << "Fixed Default Construct";
	// std::cout << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Fixed Default Destruct" << std::endl;
}

Fixed::Fixed(Fixed const &Sample)
{
	// std::cout << "Fixed Copy Default Construct";
	// std::cout << std::endl;
	*this = Sample;
}

Fixed::Fixed(const float Float)
{
	// std::cout << "Fixed float Construct";
	// std::cout << std::endl;
	this->_bitValue = (static_cast<int>(Float * (1 << this->_bitNumber)));
}

Fixed::Fixed(const int Integer)
{
	// std::cout << "Fixed integer Construct";
	// std::cout << std::endl;
	this->_bitValue = Integer * (1 << this->_bitNumber);
}

Fixed& Fixed::operator=(const Fixed &Sample)
{
	if (this != &Sample)
		this->_bitValue = Sample.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &Sample) const
{
	return (this->_bitValue < Sample.getRawBits());
}


bool Fixed::operator>(const Fixed &Sample) const
{
	return (this->_bitValue > Sample.getRawBits());
}


bool Fixed::operator>=(const Fixed &Sample) const
{
	return (this->_bitValue >= Sample.getRawBits());
}


bool Fixed::operator<=(const Fixed &Sample) const
{
	return (this->_bitValue <= Sample.getRawBits());
}


bool Fixed::operator==(const Fixed &Sample) const
{
	return (this->_bitValue == Sample.getRawBits());
}


bool Fixed::operator!=(const Fixed &Sample) const
{
	return (this->_bitValue != Sample.getRawBits());
}

Fixed Fixed::operator+(const Fixed &Sample) const
{
	return (this->getRawBits() + Sample.getRawBits());
}

Fixed Fixed::operator-(const Fixed &Sample) const
{
	return (this->toFloat() - Sample.toFloat());
}

Fixed Fixed::operator*(const Fixed &Sample) const
{
	return (this->toFloat() * Sample.toFloat());
}

Fixed Fixed::operator/(const Fixed &Sample) const
{
	return (this->toFloat() / Sample.toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed Result(*this);
	this->_bitValue += 1;
	return (Result);
}
Fixed Fixed::operator--(int)
{
	Fixed Result(*this);
	this->_bitValue -= 1;
	return (Result);
}

Fixed& Fixed::operator++()
{
	this->_bitValue++;
	return (*this);
}
Fixed& Fixed::operator--()
{
	this->_bitValue--;
	return (*this);
}

Fixed&	Fixed::min(Fixed &First, Fixed &Second)
{
	return (First < Second ? First : Second);
}
const Fixed&	Fixed::min(const Fixed &First, const Fixed &Second)
{
	return (First < Second ? First : Second);
}

Fixed&	Fixed::max(Fixed &First, Fixed &Second)
{
	return (First > Second ? First : Second);
}
const Fixed&	Fixed::max(const Fixed &First, const Fixed &Second)
{
	return (First > Second ? First : Second);
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

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->getRawBits()) / static_cast<float>(1 << this->_bitNumber));
}

int		Fixed::toInt( void ) const
{
	return (static_cast<int>(this->getRawBits() )>> this->_bitNumber);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &Sample)
{
	os << Sample.toFloat();
	(void)Sample;
	return (os);
}
