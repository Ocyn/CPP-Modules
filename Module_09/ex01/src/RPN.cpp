/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:35 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/29 16:17:06 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(): _result(0), _isSuccess(false)
{
}

RPN::~RPN()
{
}

RPN::RPN(const string &rpn): _result(0), _isSuccess(false)
{
	this->_isSuccess = (processEntry(rpn) == EXIT_SUCCESS);
}

int	RPN::processEntry(const string &rpn)
{
	std::stack<int, std::list<int> > Stk;
	for (size_t i = 0; i < rpn.size(); i++)
	{
		if (!std::isdigit(rpn[i]) && rpn[i] != ' ' \
		&& rpn[i] != '+' && rpn[i] != '-' && rpn[i] != '*' && rpn[i] != '/')
			return (errLog("Error: bad input"));
		if (std::isdigit(rpn[i])) {
			if (i == rpn.size() || std::isdigit(rpn[i + 1]))
				return (errLog("Error: bad input"));
			Stk.push(atoi(&rpn.c_str()[i]));
		}
		if (rpn[i] == '+' || rpn[i] == '-' || rpn[i] == '*' || rpn[i] == '/')
			calculate(Stk, rpn[i]);
	}
	this->_result = Stk.top();
	return (EXIT_SUCCESS);
}

void	calculate(std::stack<int, std::list<int> > &Stk, const char expression)
{
	int	result =  Stk.top();
	Stk.pop();
	if (Stk.size() > 0)
	{
		if (expression == '+') {
				result += Stk.top();
				Stk.pop();
		}
		if (expression == '-') {
				result = Stk.top() - result;
				Stk.pop();
		}
		if (expression == '*') {
				result = Stk.top() * result;
				Stk.pop();
		}
		if (expression == '/') {
				result = Stk.top() / result;
				Stk.pop();
		}
	}
	Stk.push(result);
}

void	RPN::getResult()
{
	if (this->_isSuccess == true)
		std::cout << this->_result << std::endl;
}

void	log(string content)
{
	std::cout << content << std::endl;
}

int	errLog(string content)
{
	std::cerr << content << std::endl;
	return (EXIT_FAILURE);
}
