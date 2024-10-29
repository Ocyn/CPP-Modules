/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/29 16:18:22 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	RPN_HPP
# define 	RPN_HPP

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <stack>
# include <list>
# include <cstring>
# include <algorithm>

typedef std::string string;

class RPN
{
	private:
		int		_result;
		bool	_isSuccess;
		RPN();
		RPN(const RPN &Sample);

	public:
		RPN(const string &rpn);
		~RPN();
		RPN&		operator=(const RPN& Sample);
		void		getResult();
		int			processEntry(const string &rpn);
};

void	calculate(std::stack<int, std::list<int> > &Stk, const char expression);
void	log(string content);
int		errLog(string content);


std::ostream	&operator<<(std::ostream &os, const RPN &Sample);

#endif
