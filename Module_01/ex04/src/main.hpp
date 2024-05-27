/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:21:51 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/27 22:14:03 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MAIN_HPP
# define	MAIN_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <fstream>

bool		OpenFile(std::ifstream& File, std::string FileName);
bool		ReplaceFile(std::ifstream &File, std::string FileName, std::string Search, std::string Replace);


void	__debug(std::string log);

#endif