/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:24:11 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Construct" << std::endl;
	return ;
}

Brain::Brain(const Brain &Sample)
{
	std::cout << "Brain Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain Destruct" << std::endl;
	return ;
}

Brain&	Brain::operator=(const Brain &Sample)
{
	for (size_t i = 0; i < 100; i++)
		this->_Ideas[i] = Sample._Ideas[i];
	return (*this);
}
