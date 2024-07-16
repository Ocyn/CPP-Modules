/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:23:36 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>

# include "Brain.hpp"

typedef std::string string;

class	Animal {

	public:
		Animal		(void);
		Animal		(const Animal &Sample);
		Animal		(string type);
		virtual ~Animal		(void);

		Animal&		operator=(const Animal &Sample);
		string		getType() const;
		virtual	void		makeSound() const = 0;

	protected:
		string		_Type;
};

#endif
