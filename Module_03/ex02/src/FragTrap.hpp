/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 16:36:28 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap {

	public:
		FragTrap			(void);
		FragTrap			(const string Name);
		FragTrap			(const FragTrap &Sample);
		virtual ~FragTrap	(void);

		FragTrap&		operator=(const FragTrap &Sample);
		void			highFivesGuys();
};

#endif
