/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:07:28 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/18 16:16:15 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange():
 _inFileName(),
 _dbFileName("data.csv")
{
}

BitcoinExchange::~BitcoinExchange()
{
	if (this->_dbFile.is_open() == true)
		this->_dbFile.close();
	if (this->_inFile.is_open() == true)
		this->_inFile.close();
}


BitcoinExchange::BitcoinExchange(const string &name):
_inFileName(name),
_dbFileName("data.csv")
{
	try {
		this->openFile(this->_dbFile, this->_dbFileName);
		std::cout << "Database file [" << this->_dbFileName << "] successfully opened." << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		this->openFile(this->_inFile, this->_inFileName);
		std::cout << "Input file [" << this->_inFileName << "] successfully opened." << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}


// YEAR-MONTH-DAY
bool	checkDateFormat(const string &Date)
{
	if (Date.size() != 10)
		return (false);
	if (Date[4] != '-' || Date[7] != '-')
		return (false);
	for (size_t i = 0; i < Date.size(); ++i) {
		if (!isdigit(Date[i]) && i != 4 && i != 7)
			return (false);
	}
	int	Year = atoi(Date.substr(0, 4).c_str());
	int	Month = atoi(Date.substr(5, 2).c_str());
	int	Day = atoi(Date.substr(8, 2).c_str());
	if (Year < 1 || Year > 9999)
		return (false);
	if (Year < 2009 || (Year <= 2009 && Month < 2 && Day < 2) || (Year <= 2009 && Month <= 1 && Day < 2))
		return (false);
	if (Month < 1 || Month > 12)
		return (false);
	if (Day < 1)
		return (false);
	if ((Month % 2 == 0 && Day > 30) || (Month % 2 != 0 && Day > 31))
		return (false);
	if (((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0) && Month == 2 && Day > 29)
		return (false);
	else if (!((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0) && Month == 2 && Day > 28)
		return (false);
	return (true);
}


void	BitcoinExchange::parseInfile()
{
	string	Line;
	while (std::getline(this->_inFile, Line))
	{
		if (Line.empty() || Line.find("date | value") != Line.npos)
			continue;
		string	date = Line.substr(0, Line.find(" | "));
		float	value = strtof(Line.substr(Line.find(" | ") + 3).c_str(), NULL);
		if (Line.find('|') == Line.npos)
			value = 0;
		std::map<string, float>::iterator	it = this->_dataBase.lower_bound(date);
		if (it != this->_dataBase.find(date) && it != this->_dataBase.begin())
			it--;
		if (it != this->_dataBase.end() && checkDateFormat(date) \
		&& it->second * value >= 0 && value < 1000)
			std::cout << date << " => " << it->second << " = " << it->second * value << std::endl;
		else if (checkDateFormat(date) == false)
			std::cerr << "Error : " << "Bad input => " << date << std::endl;
		else if (it->second * value < 0)
			std::cerr << "Error : " << "Not a positive Number" << std::endl;
		else if (value > 1000)
			std::cerr << "Error : " << "Too large a number " << std::endl;
		else
			std::cerr << "Error : " << "Fuuuuuuuu : " << date << " => " << it->second << " = " << it->second * value << std::endl;
	}
}


void	BitcoinExchange::initDB()
{
	string	Line;
	while (std::getline(this->_dbFile, Line))
	{
		string	date = Line.substr(0, Line.find(','));
		float	value = strtof(Line.substr(Line.find(',') + 1).c_str(), NULL);
		this->_dataBase.insert(std::make_pair(date, value));
	}
}

const string	BitcoinExchange::getInFileName() const
{
	return (this->_inFileName);
}

const string	BitcoinExchange::getDbFileName() const
{
	return (this->_dbFileName);
}


std::map<string, float>	&BitcoinExchange::getDbFile()
{
	return (this->_dataBase);
}


void	BitcoinExchange::openFile(std::ifstream &File, const string &Filename)
{
	if (File.is_open() == true)
		File.close();
	File.open(Filename.c_str());
	if (File.is_open() == false)
		throw CouldNotOpenFile();
}


// Exceptions

const char *InvalidFormat::what() const throw()
{
	return ("Invalid format");
}

const char *CouldNotOpenFile::what() const throw()
{
	return ("Could not open file");
}
