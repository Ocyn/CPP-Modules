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

#ifndef	CAT_HPP
# define CAT_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>

# include "Animal.hpp"

typedef std::string string;

class	Cat : public Animal {

	public:
		Cat				(void);
		Cat				(const string Name);
		Cat				(const Cat &Sample);
		virtual	~Cat	(void);
		Cat&			operator=(const Cat &Sample);

		void			makeSound() const;

	protected:
		string		_Type;
	private:
		Brain		*_Brain;
};

#endif
