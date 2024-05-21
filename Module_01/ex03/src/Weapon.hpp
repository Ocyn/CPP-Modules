/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:47:24 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 22:33:50 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <cstring>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string WeaponType);
		~Weapon();
		const std::string	&getType();
		void				setType(std::string type);
};

#endif