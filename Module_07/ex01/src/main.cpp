/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/07 20:39:10 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	log(string content)
{
	std::cout << content << std::endl;
}
	

int main( void )
{
	{
		log("____Array type Int:");
		int array[] = {1, 2, 3, 6, 7, 8, 9};
		iter(array, 7, printElement<int>);
	}
	{
		log("____Array type Char:");
		char array[] = "Salam les khoya !";
		iter(array, 18, printElement<char>);
	}
	return 0;
}
