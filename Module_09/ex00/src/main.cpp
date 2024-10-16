/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/16 19:05:55 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


void	log(string content)
{
	std::cout << content << std::endl;
}

int	error_log(string content)
{
	std::cerr << content << std::endl;
	return (EXIT_FAILURE); 
}


#define DEFAULT 99

int main( int ac, char **av )
{
	if (ac !=  2)
		return (error_log("Invalid arguments format : ./BitcoinExchange <file.csv>"));
	string	Filename = av[1];
	BitcoinExchange	btc(Filename);
	log("Init Database");
	btc.initDB();
	std::cout << "Size : " << btc.getDbFile().size() << std::endl;
	log("Parse Infile");
	btc.parseInfile();
	log("\n_____END");
	return 0;
}
