/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesome.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/12 05:06:33 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

void	Search( void )
{
	std::cout << "Searching..." << std::endl;
	std::cout << "\rPlease Enter Command (ADD, SEARCH, EXIT)" << std::endl;
	return ;
}

void	Exit( void )
{
	std::cout << "Exiting" << std::endl;
	return ;
}


int	main(void)
{
	std::string	Prompt;
	PhoneBook	Book;

	std::cout << "\rPlease Enter Command (ADD, SEARCH, EXIT)" << std::endl;
	while (std::cin >> Prompt)
	{
		if (!Prompt.compare("ADD")) {
			Book.Contacts[(Book.List_len % 8)].Setup((Book.List_len % 8));
			Book.List_len++;
		}
		else if (!Prompt.compare("SEARCH"))
			Search();
		else if (!Prompt.compare("EXIT"))
		{
			Exit();
			break ;
		}
	}
	return (0);
}
