/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/11 19:30:46 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap {

	public:
		ScavTrap			(void);
		ScavTrap			(const string Name);
		ScavTrap			(const ScavTrap &Sample);
		virtual ~ScavTrap	(void);

		ScavTrap&		operator=(const ScavTrap &Sample);
		void			guardGate() const;
};

#endif
