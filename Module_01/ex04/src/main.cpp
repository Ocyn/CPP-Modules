/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:17:40 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/27 22:57:20 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	std::string		FileName = argv[1];
	std::string		Search = argv[2];
	std::string		Replace = argv[3];
	std::ifstream	File;
	if (OpenFile(File, FileName))
		return (1);
	if (ReplaceFile(File, FileName, Search, Replace))
		return (1);
	File.close();
	return (0);
}
