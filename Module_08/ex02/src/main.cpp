/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/10 20:50:06 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	log(string content)
{
	std::cout << content << std::endl;
}


#define DEFAULT 9

// int main()
// {
// 	srand(time(0));
// 	MutantStack<int>	bob;
// 	for (size_t i = 0; i < DEFAULT; i++) {
// 		bob.push(rand() % 999);
// 	}
// 	for (MutantStack<int>::iterator	it = bob.begin(); it != bob.end(); ++it) {
// 		std::cout << *it << std::endl;
// 	}
// 	// std::stack<int> s(bob);
// 	return 0;
// }

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
