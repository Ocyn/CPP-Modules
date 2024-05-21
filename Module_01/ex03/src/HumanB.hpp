/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:26 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 19:20:31 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
				HumanB(std::string name);
				~HumanB();
		void	attack();
		void	setName(std::string name);
		void	setWeapon(const Weapon &weapon);
};
