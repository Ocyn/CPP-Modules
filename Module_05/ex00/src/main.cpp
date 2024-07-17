/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/17 17:38:57 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define _NB 10

void	Test( Bureaucrat Peal )
{
	std::cout << Peal.getName() << ":" << Peal.getGrade() << std::endl;
	std::cout << std::endl;
}


int main()
{
	std::cout << "\nTEST 1" << std::endl;
	/*	TEST 1	*/

	Bureaucrat Peal("Michel", 99);

	Test(Peal);
}
