/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:26 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 22:28:06 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setName(std::string name);
		void	setWeapon(Weapon &weapon);
};

#endif