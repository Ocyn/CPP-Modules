/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesome.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/08 01:51:59 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

int	main(void)
{
	std::string	Prompt;
	PhoneBook	Book;

	std::cout << "\rPlease Enter Command (ADD, SEARCH, EXIT)" << std::endl;
	while (std::cin >> Prompt)
	{
		if (!Prompt.compare("ADD"))
			Book.AddContact();
		else if (!Prompt.compare("SEARCH"))
			Book.Search();
		else if (!Prompt.compare("EXIT"))
		{
			Book.DestroyBook();
			break ;
		}
	}
	return (0);
}
