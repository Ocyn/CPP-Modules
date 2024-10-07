/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/07 17:53:53 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void	ft_log(string content)
{
	std::cout << content << std::endl;
}

void	printBase(Base *Sample)
{
	std::cout << "Base: [ " << Sample << " ]" << std::endl;
}

void	identifying(const string &Name, Base *base)
{
	ft_log("Identifying " + Name + "...");
	ft_log("\tPointer mode:");
	identify(base);
	ft_log("\tReference mode:");
	identify(*base);
	delete base;
	ft_log("\n");
}

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	ft_log("Generating bases...");
	Base	*Bob = generate();
	printBase(Bob);
	Base	*Stephane = generate();
	printBase(Stephane);
	Base	*Michel = generate();
	printBase(Michel);
	ft_log("\n\n");
	identifying("Bob", Bob);
	identifying("Stephane", Stephane);
	identifying("Michel", Michel);
	return (0);
}
