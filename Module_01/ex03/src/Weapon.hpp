/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:47:24 by ocyn              #+#    #+#             */
/*   Updated: 2024/05/21 19:09:07 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <cstring>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon				(std::string WeaponType);
		~Weapon				();
		const std::string	&getType();
		void				setType(std::string type);
};
