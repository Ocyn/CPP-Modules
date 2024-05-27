/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileManip.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:21:28 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/27 22:56:33 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	OpenFile(std::ifstream& File, std::string FileName)
{
	File.open(FileName.c_str());
	if (!File)
	{
		std::cerr << "Cannot open file\n";
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

bool	ReplaceFile(std::ifstream &File, std::string FileName, std::string Search, std::string Replace)
{
	std::string		NewFileName = FileName.append(".replace");
	std::ofstream	Outfile(NewFileName.c_str());

	if (!Outfile)
	{
		std::cerr << "Cannot create new file\n";
		return (EXIT_FAILURE);
	}
	std::string			Line;
	int					Index = 0;
	while (std::getline(File, Line))
	{
		Index = 0;
		do
		{
			Index = Line.find(Search, Index);
			if (Index == -1)
				break ;
			Line.erase(Index, Search.length());
			Line.insert(Index, Replace);
			Index += Replace.length();
		} while (Index > 0);
		Outfile << Line << std::endl;
	}
	Outfile.close();
	return (EXIT_SUCCESS);
}
