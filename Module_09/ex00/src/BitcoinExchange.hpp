/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/18 11:46:14 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <cmath>
# include <limits>
# include <algorithm>
# include <cstdlib>
# include <cstring>
# include <fstream>

typedef std::string string;

class BitcoinExchange
{
	private:
		string					_inFileName;
		string					_dbFileName;
		std::ifstream			_dbFile;
		std::ifstream			_inFile;
		std::map<string, float>	_dataBase;

		BitcoinExchange& operator=(const BitcoinExchange &Sample);
		BitcoinExchange(const BitcoinExchange &Sample);
		BitcoinExchange();
		
	public:
		~BitcoinExchange();
		BitcoinExchange(const string &name);

		const string	getInFileName() const;
		const string	getDbFileName() const;

		std::map<string, float>	&getDbFile();

		void	initDB();
		void	parseInfile();

		void	openFile(std::ifstream &File, const string &Filename);


};

std::ostream	&operator<<(std::ostream &os, const BitcoinExchange &Sample);

// Exceptions

class	InvalidFormat : public std::exception { 
	public:
		const char *what() const throw();
};

class	CouldNotOpenFile : public std::exception { 
	public:
		const char *what() const throw();
};

class	BadInput : public std::exception { 
	public:
		const char *what() const throw();
};

bool	checkDateFormat(const string &Date);

#endif
