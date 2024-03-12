/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/06 11:13:40 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int t = 1; argv[t]; t++)
	{
		for (int i = 0; argv[t][i]; i++)
		{
			if (argv[t][i] >= 'a' && argv[t][i] <= 'z')
				std::cout << (char)((argv[t][i]) - 32);
			else
				std::cout << argv[t][i];
		}
	}
	std::cout << std::endl;
	return (0);
}
