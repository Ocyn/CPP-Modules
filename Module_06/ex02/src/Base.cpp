/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:56:24 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/07 17:57:24 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

};

Base * generate(void)
{
	int	russianRoulette = rand() % 3;

	Base *jesus;
	string	_type;

	switch (russianRoulette)
	{
		case 0:
			jesus = new A();
			_type = "A";
			break;
		case 1:
			jesus = new B();
			_type = "B";
			break;
		case 2:
			jesus = new C();
			_type = "C";
			break;
		default:
			break;
	}
	std::cout << "Generated Entity type " << _type << " ! " << std::endl;
	return (jesus);
}


/*
Identifying if the given Base class pointer if type A, B or C.
It uses dynamic_Cast.
If the result the cast is equal to NULL, it means that the cast was not the good one.
*/
void identify(Base* p)
{
	A *_A = dynamic_cast<A*>(p);
	if (_A)
		std::cout << "Base type A" << std::endl;
	B *_B = dynamic_cast<B*>(p);
	if (_B)
		std::cout << "Base type B" << std::endl;
	C *_C = dynamic_cast<C*>(p);
	if (_C)
		std::cout << "Base type C" << std::endl;
}

/*
Identifying if the given Base class reference if type A, B or C.
It uses dynamic_Cast with try bloc.
If the cast throw and std::bad_cast exception error, it means that the cast was not the good one.
*/
void identify(Base& p)
{
	try {
		A _A = dynamic_cast<A&>(p);
		std::cout << "Base type A" << std::endl;
	}
	catch (std::exception &e) { }
	try {
		B _B = dynamic_cast<B&>(p);
		std::cout << "Base type B" << std::endl;
	}
	catch (std::exception &e) { }
	try {
		C _C = dynamic_cast<C&>(p);
		std::cout << "Base type C" << std::endl;
	}
	catch (std::exception &e) { }
}
