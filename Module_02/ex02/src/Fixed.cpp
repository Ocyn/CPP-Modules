/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/10 19:35:21 by ocyn             ###   ########.fr       */
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

Fixed::Fixed(Fixed const &Sample)
{
	std::cout << "Fixed Copy Default Construct";
	std::cout << std::endl;
	*this = Sample;
}

Fixed::Fixed(const float Float)
{
	std::cout << "Fixed float Construct";
	std::cout << std::endl;
	this->_bitValue = roundf(Float * (1 << this->_bitNumber));
}

Fixed::Fixed(const int Integer)
{
	std::cout << "Fixed integer Construct";
	std::cout << std::endl;
	this->_bitValue = Integer * (1 << this->_bitNumber);
}

Fixed& Fixed::operator=(const Fixed &Sample)
{
	if (this != &Sample)
		this->_bitValue = Sample._bitValue;
	return (*this);
}

bool Fixed::operator<(const Fixed &Sample)
{
	return (this->_bitValue < Sample._bitValue);
}


bool Fixed::operator>(const Fixed &Sample)
{
	return (this->_bitValue > Sample._bitValue);
}


bool Fixed::operator>=(const Fixed &Sample)
{
	return (this->_bitValue >= Sample._bitValue);
}


bool Fixed::operator<=(const Fixed &Sample)
{
	return (this->_bitValue <= Sample._bitValue);
}


bool Fixed::operator==(const Fixed &Sample)
{
	return (this->_bitValue == Sample._bitValue);
}


bool Fixed::operator!=(const Fixed &Sample)
{
	return (this->_bitValue != Sample._bitValue);
}

Fixed& Fixed::operator+(const Fixed &Sample)
{
	this->_bitValue += Sample._bitValue;
	return (*this);
}

Fixed& Fixed::operator-(const Fixed &Sample)
{
	this->_bitValue -= Sample._bitValue;
	return (*this);
}

Fixed& Fixed::operator*(const Fixed &Sample)
{
	this->_bitValue *= Sample._bitValue;
	return (*this);
}

Fixed& Fixed::operator/(const Fixed &Sample)
{
	this->_bitValue /= Sample._bitValue;
	return (*this);
}

Fixed& Fixed::operator++(int n)
{
	if (n != 0)
		this->_bitValue += n;
	else
		this->_bitValue += 1;
}
Fixed& Fixed::operator--(int n)
{
	if (n != 0)
		this->_bitValue -= n;
	else
		this->_bitValue -= 1;
}

Fixed& Fixed::operator++()
{
	this->_bitValue += 1;
}
Fixed& Fixed::operator--()
{
	this->_bitValue -= 1;
}

const int	Fixed::min(int &First, int &Second)
{
	if (First == Second)
		return (0);
	if (First < Second)
		return (First);
	else
		return (Second);
}
const int	Fixed::min(const int &First, const int &Second)
{
	if (First == Second)
		return (0);
	if (First < Second)
		return (First);
	else
		return (Second);
}

const int	Fixed::max(int &First, int &Second)
{
	if (First == Second)
		return (0);
	if (First > Second)
		return (First);
	else
		return (Second);
}
const int	Fixed::max(const int &First, const int &Second)
{
	if (First == Second)
		return (0);
	if (First > Second)
		return (First);
	else
		return (Second);
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
	std::cout << Sample.toFloat();
	(void)Sample;
	return (os);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (1 << this->_bitNumber));
}

int		Fixed::toInt( void ) const
{
	return ((int)this->getRawBits() / (1 << this->_bitNumber));
}

