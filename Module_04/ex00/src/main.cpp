/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/16 21:41:09 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	Test_2( Dog &Buddy )
{
	std::cout << Buddy.getType() << " ! Come on, do something !" << std::endl;
	std::cout << std::endl;
}

void	Test( Cat &Buddy )
{
	std::cout << Buddy.getType() << " ! Come on, do something !" << std::endl;
	std::cout << std::endl;
}

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* o = new Cat();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << o->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	o->makeSound();
	i->makeSound(); //will output the cat sound!
	delete meta;
	delete j;
	delete o;
	delete i;
	return (0);
}
