/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/12 22:43:26 by ocyn             ###   ########.fr       */
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
	// for (std::map<string, float>::iterator it = btc.getDbFile().begin(); 
	// it != btc.getDbFile().end(); ++it) {
	// 	std::cout << it->first << " -> " << it->second << std::endl;
	// }
	log("Init Infile");
	btc.initInfile();
	log("\n\nShowing");
	std::cout << "Size : " << btc.getInFile().size() << std::endl;
	for (std::map<string, float>::iterator it = btc.getInFile().begin(); \
	it != btc.getInFile().end(); ++it) {
		std::cout << it->first << " -> " << it->second << std::endl;
	}

	log("Testing occurences");
	log("\n_____END");
	return 0;
}
