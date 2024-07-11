/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/11 19:30:50 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>

typedef std::string string;

class	ClapTrap {

	public:
		ClapTrap		(void);
		ClapTrap		(const string Name);
		ClapTrap		(const ClapTrap &Sample);
		~ClapTrap		(void);

		ClapTrap&		operator=(const ClapTrap &Sample);
		void			attack(const string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		const string	getName() const;
		void			energyCost(unsigned int amount);

	protected:
		string		_Name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDammages;
};

#endif
