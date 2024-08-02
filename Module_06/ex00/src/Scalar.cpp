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

void	*Scalar::convert(string Literal)
{
	// Testing char
		char	_char = static_cast<char>(Literal[0]);
	return (&_char);
	return (NULL);
}
