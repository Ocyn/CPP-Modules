/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:14:55 by ocyn              #+#    #+#             */
/*   Updated: 2024/10/18 11:50:01 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	RPN_HPP
# define 	RPN_HPP

# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <stack>
# include <cstring>
# include <algorithm>

typedef std::string string;

class RPN
{
	private:
		std::stack<int> _cont;
		RPN();
		RPN(const RPN &Sample);

	public:
		~RPN();
		RPN&		operator=(const RPN& Sample);
};

std::ostream	&operator<<(std::ostream &os, const RPN &Sample);

#endif
