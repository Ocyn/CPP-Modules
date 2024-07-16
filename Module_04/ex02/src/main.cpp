/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/16 20:58:10 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define _NB 10

void	Test( Animal **Peal )
{
	for (size_t i = 0; i < _NB; i++)
		Peal[i]->makeSound();
	std::cout << std::endl;
}

void	Purge(Animal **Peal)
{
	for (size_t i = 0; i < _NB; i++)
		delete Peal[i];
}

int main()
{
	std::cout << "\nTEST 1" << std::endl;
	/*	TEST 1	*/

	Animal *Peal[_NB];

	/*	TEST ABSTRACT CLASS	*/
	// Animal hey(); Test

	for (size_t i = 0; i < _NB / 2; i++)
		Peal[i] = new Dog();
	for (size_t i = _NB / 2; i < _NB; i++)
		Peal[i] = new Cat();

	Test(Peal);
	Purge(Peal);

	std::cout << "\nTEST 2" << std::endl;
	/*	TEST 2	*/

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;	//should not create a leak
	delete i;

	std::cout << "\nTEST 3" << std::endl;
	/*	TEST 3	*/
	Dog test;
	{
		Dog fautpasquecacrash = test;
	}
	return 0;
}
