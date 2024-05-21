/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:35:33 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 18:45:36 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <cstring>

void	Get_original_string(std::string str)
{
	std::cout << "Original string: " << str << std::endl;
}

void	Get_address_RAW(std::string str)
{
	std::cout << "RAW: " << &str << std::endl;
}
void	Get_address_PTR(std::string *str)
{
	std::cout << "PTR: " << str << std::endl;
}

void	Get_address_REF(std::string &str)
{
	std::cout << "REF: " << &str << std::endl;
}

int	main()
{
	std::string	HiBrain	= "HI THIS IS BRAIN";
	std::string	*stringPTR = &HiBrain;
	std::string	&stringREF = HiBrain;
	Get_original_string(HiBrain);
	Get_address_RAW(HiBrain);
	Get_address_PTR(stringPTR);
	Get_address_REF(stringREF);
	return (0);
}
