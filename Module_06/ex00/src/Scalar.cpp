/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:24:11 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

char ScalarConverter::_char;
int ScalarConverter::_int;
float ScalarConverter::_float;
double ScalarConverter::_double;


ScalarConverter::ScalarConverter()
{
	std::cout << "Scalar Default Construct" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &Sample)
{
	std::cout << "Scalar Recopy Construct" << std::endl;
	*this = Sample;
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	std::cout << "Scalar Destruct" << std::endl;
	return ;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &Sample)
{
	(void) Sample;
	return (*this);
}

void	ScalarConverter::convertChar(string	Literal)
{
	std::cout << "CHAR" << std::endl;
	ScalarConverter::_char = Literal[0];
	ScalarConverter::_int = static_cast<int>(ScalarConverter::_char);
	ScalarConverter::_float = static_cast<float>(ScalarConverter::_char);
	ScalarConverter::_double = static_cast<double>(ScalarConverter::_char);
}

void	ScalarConverter::convertInt(string	Literal)
{
	std::cout << "INT" << std::endl;
	ScalarConverter::_int = atoi(Literal.c_str());
	ScalarConverter::_char = static_cast<char>(ScalarConverter::_int);
	ScalarConverter::_float = static_cast<float>(ScalarConverter::_int);
	ScalarConverter::_double = static_cast<double>(ScalarConverter::_int);
}

void	ScalarConverter::convertFloat(string	Literal)
{
	std::cout << "FLOAT" << std::endl;
	ScalarConverter::_float = std::strtof(Literal.c_str(), NULL);
	ScalarConverter::_int = static_cast<int>(ScalarConverter::_float);
	ScalarConverter::_char = static_cast<char>(ScalarConverter::_float);
	ScalarConverter::_double = static_cast<double>(ScalarConverter::_float);
}

void	ScalarConverter::convertDouble(string	Literal)
{
	std::cout << "DOUBLE" << std::endl;
	ScalarConverter::_double = std::strtod(Literal.c_str(), NULL);
	ScalarConverter::_float = static_cast<float>(ScalarConverter::_double);
	ScalarConverter::_int = static_cast<int>(ScalarConverter::_double);
	ScalarConverter::_char = static_cast<char>(ScalarConverter::_double);
}

void	ScalarConverter::printChar(string Literal)
{
	std::cout << "Char: ";
	char **nptr = NULL;
	double test = std::strtod(Literal.c_str(), nptr);
	if ((nptr && (**nptr != '\0' || **nptr == 'f')) \
	|| std::isnan(test) \
	|| test > std::numeric_limits<char>::max() \
	|| test < std::numeric_limits<char>::min())
		std::cout << "Impossible";
	else if (ScalarConverter::_char < 33 || ScalarConverter::_char > 126)
		std::cout << "Not displayable";
	else
		std::cout << "\'"<< ScalarConverter::_char << "\'";
	std::cout << std::endl;
}

void	ScalarConverter::printInt(string Literal)
{
	(void)Literal;
	std::cout << "Int: ";
	char **nptr = NULL;
	double test = std::strtod(Literal.c_str(), nptr);
	(void)test;
	if ((nptr && (**nptr != '\0' || **nptr == 'f')) \
	|| std::isnan(test) \
	|| test > std::numeric_limits<int>::max() \
	|| test < std::numeric_limits<int>::min())
		std::cout << "Impossible";
	else
		std::cout << ScalarConverter::_int;
	std::cout << std::endl;
}

void	ScalarConverter::printFloat(string Literal)
{
	(void)Literal;
	std::cout << "Float: ";
	char **nptr = NULL;
	double test = std::strtod(Literal.c_str(), nptr);
	(void)test;
	std::stringstream	fl;

	fl << ScalarConverter::_float;
	if ((nptr && (**nptr != '\0' || **nptr == 'f')) \
	|| std::isnan(test) \
	|| test > std::numeric_limits<int>::max() \
	|| test < std::numeric_limits<int>::min())
		std::cout << "nanf";
	else
	{
		if (fl.str().find('.') == fl.str().npos \
		&& fl.str().find('e') == fl.str().npos)
			fl << ".0f";
		else
			fl << "f";
		std::cout << fl.str();
	}
	std::cout << std::endl;
}

void	ScalarConverter::printDouble(string Literal)
{
	(void)Literal;
	std::cout << "Double: ";
	char **nptr = NULL;
	double test = std::strtod(Literal.c_str(), nptr);
	(void)test;
	std::stringstream	db;

	db << ScalarConverter::_double;
	if ((nptr && (**nptr != '\0' || **nptr == 'f')) \
	|| std::isnan(test) \
	|| test > std::numeric_limits<int>::max() \
	|| test < std::numeric_limits<int>::min())
		std::cout << "nan";
	else
	{
		if (db.str().find('.') == db.str().npos \
		&& db.str().find('e') == db.str().npos)
			db << ".0";
		std::cout << db.str();
	}
	std::cout << std::endl;
}

void	ScalarConverter::convert(string Literal)
{
	bool	isChar = false;
	for (size_t	i = 0; i < Literal.size(); i++)
	{
		if ((Literal[i] < '0' || Literal[i] > '9') \
		&& Literal[i] != '.' && Literal[i] != 'f' && Literal.size() == 1)
		{
			convertChar(Literal);
			isChar = true;
			break;
		}
	}
	if (isChar == false)
	{
		if (Literal.find('f') != Literal.npos)
			convertFloat(Literal);
		else if (Literal.find('.') != Literal.npos)
			convertDouble(Literal);
		else
			convertInt(Literal);
	}
	printChar(Literal);
	printInt(Literal);
	printFloat(Literal);
	printDouble(Literal);
}
