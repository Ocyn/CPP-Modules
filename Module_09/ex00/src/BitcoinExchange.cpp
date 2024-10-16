/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:07:28 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/16 19:43:39 by ocyn             ###   ########.fr       */
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

// BitcoinExchange::BitcoinExchange(const BitcoinExchange &Sample)
// {
// 	*this = Sample;
// }

// BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &Sample)
// {
// 	if (Sample._dbFileName != this->_dbFileName)
// 		this->_dbFileName = Sample._dbFileName;
// 	if (Sample._inFileName != this->_inFileName)
// 		this->_inFileName = Sample._inFileName;
// 	if (this->_inFile)
// 		this->_inFile.close();
// 	this->_inFile.open(Sample.getFileName().c_str());
// 	return (*this);
// }

// YEAR-MONTH-DAY
bool	checkDateFormat(const string &Date)
{
	if (Date.size() != 10)
		return (false);
	if (Date[4] != '-' || Date[7] != '-')
		return (false);
	for (size_t i = 0; i < Date.size(); ++i)
	{
		if (!isdigit(Date[i]) && i != 4 && i != 7)
			return (false);
	}
	int	Year = atoi(Date.substr(0, 4).c_str());
	int	Month = atoi(Date.substr(5, 2).c_str());
	int	Day = atoi(Date.substr(8, 2).c_str());
	if (Year < 1 || Year > 9999)
		return (false);
	if (Month < 1 || Month > 12)
		return (false);
	if (Day < 1 || Day > 31)
		return (false);
	// if (Year % 4 != 0 && )
	return (true);
}

// YEAR-MONTH-DAY,value
void	BitcoinExchange::parseInfile()
{
	string	Line;
	while (std::getline(this->_inFile, Line))
	{
		// std::cout << Line << " -> \t\t\t";
		string	date = Line.substr(0, Line.find(" | "));
		float	value = strtof(Line.substr(Line.find(" | ") + 3).c_str(), NULL);
		if (Line.find('|') == Line.npos)
			value = 0;
		std::map<string, float>::iterator	it = this->_dataBase.lower_bound(date);
		if (it != this->_dataBase.find(date) && it != this->_dataBase.begin())
			it--;
		if (it != this->_dataBase.end() && checkDateFormat(date) \
		&& it->second * value > 0 && it->second * value < 1000)
			std::cout << date << " => " << it->second << " * " << value << " = " << it->second * value << std::endl;
		else if (checkDateFormat(date) == false)
			std::cerr << "Error : " << "Bad input => " << date << std::endl;
		else if (it->second * value < 0)
			std::cerr << "Error : " << "Not a positive Number" << std::endl;
		else if (value > 1000)
			std::cerr << "Error : " << "Not a positive Number" << std::endl;
	}
}

// YEAR-MONTH-DAY,value
void	BitcoinExchange::initDB()
{
	string	Line;
	while (std::getline(this->_dbFile, Line))
	{
		//std::cout << Line << " -> ";
		string	date = Line.substr(0, Line.find(','));
		//std::cout << date << " | ";
		float	value = strtof(Line.substr(Line.find(',') + 1).c_str(), NULL);
		this->_dataBase.insert(std::make_pair(date, value));
		//std::cout << value << std::endl;
	}
}

void	checkValue(const float nu)
{
	if (nu <= 0)
		throw NotAPositiveNumber();
	if (nu >= 1000)
		throw TooLargeNumber();
	
}

// void	BitcoinExchange::findValue()
// {
// 	// std::map<string, float>::iterator	it_db = this->_dataBase.begin();
// 	std::map<string, float>::iterator	it_in = this->_inputFile.begin();
// 	while (it_in != this->_inputFile.end())
// 	{
// 		++it_in;
// 		std::cout << it_in->first;
// 		if (this->_dataBase.find(it_in->first) == this->_dataBase.end())
// 		{
// 			std::cerr << "Not found" << std::endl;
// 			continue;
// 		}
// 		float	result;
// 		result = this->_dataBase.find(it_in->first)->second;
// 		try {
// 			checkValue(result);
// 			std::cout << " => " << it_in->second << " = ";
// 			std::cout << result << std::endl;
// 		}
// 		catch(const std::exception& e) {
// 			std::cerr << e.what() << '\n';
// 		}
// 	}
// }


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

const char *NotAPositiveNumber::what() const throw()
{
	return ("Not a positive number");
} 

const char *BadInput::what() const throw()
{
	return ("Bad input => ");
}

const char *TooLargeNumber::what() const throw()
{
	return ("Too large number");
}

const char *CouldNotOpenFile::what() const throw()
{
	return ("Could not open file");
}
