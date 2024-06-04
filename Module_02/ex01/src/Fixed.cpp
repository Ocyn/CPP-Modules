/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:32 by ocyn              #+#    #+#             */
/*   Updated: 2024/06/04 19:18:14 by ocyn             ###   ########.fr       */
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
	std::cout << "Fixed Destruct" << std::endl;
}

Fixed::Fixed(const float Float): _bitValue(Float)
{
	std::cout << "Fixed const float Construct";
	std::cout << std::endl;
}

Fixed::Fixed(const int Integer): _bitValue(Integer)
{
	std::cout << "Fixed const integer Construct";
	std::cout << std::endl;
}

Fixed& Fixed::operator=(const Fixed &Sample)
{
	std::cout << "Fixed = Operator Overload";
	std::cout << std::endl;
	if (this != &Sample)
		*this = Sample;
}

Fixed::Fixed(const int Integer): _bitValue(Integer)
{
	std::cout << "Fixed Const Integer Construct";
	std::cout << std::endl;
}

Fixed::Fixed(const float Float): _bitValue(Float)
{
	std::cout << "Fixed Const Integer Construct";
	std::cout << std::endl;
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

std::ostream	&operator<<(std::ostream &o, const float Float)
{
	std::cout << "Ostream << Operator Overload";
	std::cout << std::endl;
	if (this != &instance)
	{
		this->_bitValue = instance._bitValue;
	}
	return (*this);
}