/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/07/16 21:32:34 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONG_ANIMAL
# define WRONG_ANIMAL

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>

typedef std::string string;

class	WrongAnimal {

	public:
		WrongAnimal		(void);
		WrongAnimal		(const WrongAnimal &Sample);
		WrongAnimal		(string type);
		virtual	~WrongAnimal		(void);

		WrongAnimal&		operator=(const WrongAnimal &Sample);
		string				getType() const;
		void				makeSound() const;

	protected:
		string		_Type;
};

#endif
