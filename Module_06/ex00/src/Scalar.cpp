/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:24:11 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar()
{
	std::cout << "Scalar Default Construct" << std::endl;
	return ;
}

Scalar::Scalar(const Scalar &Sample)
{
	std::cout << "Scalar Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Scalar::~Scalar( void )
{
	std::cout << "Scalar Destruct" << std::endl;
	return ;
}

Scalar&	Scalar::operator=(const Scalar &Sample)
{
	(void) Sample;
	return (*this);
}

void	Scalar::convert(string Literal)
{
	//std::cout << "[ " << Literal << " ]" << std::endl;
	try
	{
		std::cout << "Char: ";
		char	_char = boost::lexical_cast<char>(Literal);
		std::cout << _char << std::endl;
	}
	catch(const boost::bad_lexical_cast& e)
	{
		throw Scalar::Impossible();
	}
	try
	{
		std::cout << "Int: ";
		int	_int = boost::lexical_cast<int>(Literal);
		std::cout << _int << std::endl;
	}
	catch(const boost::bad_lexical_cast& e)
	{
		throw Scalar::Impossible();
	}
	try
	{
		std::cout << "Float: ";
		float	_float = boost::lexical_cast<float>(Literal);
		std::cout << _float << std::endl;
	}
	catch(const boost::bad_lexical_cast& e)
	{
		throw Scalar::Impossible();
	}
	try
	{
		std::cout << "Double: ";
		double	_double = boost::lexical_cast<double>(Literal);
		std::cout << _double << std::endl;
	}
	catch(const boost::bad_lexical_cast& e)
	{
		throw Scalar::Impossible();
	}
	return ;
}
