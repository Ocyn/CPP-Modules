/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/06/24 14:23:36 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>

# include "Animal.hpp"
# include "WrongAnimal.hpp"

typedef std::string string;

class	WrongCat : public WrongAnimal {

	public:
		WrongCat				(void);
		WrongCat				(const string Name);
		WrongCat				(const WrongCat &Sample);
		~WrongCat	(void);
		WrongCat&			operator=(const WrongCat &Sample);

		void			makeSound() const;

	protected:
		string		_Type;
};

#endif
