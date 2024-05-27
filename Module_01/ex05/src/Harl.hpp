/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 22:59:40 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/27 23:36:46 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HARL_HPP
# define	HARL_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <fstream>

class	Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public:
	Harl(/* args */);
	~Harl();
	void	complain( std::string level );
};

#endif