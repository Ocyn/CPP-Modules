/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/07 15:59:08 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

typedef unsigned long uintptr_t;
typedef std::string string;

struct Data
{
	int	value;
};

class	Serializer {

	private:
		Serializer		(void);
		Serializer		(const Serializer &Sample);
		~Serializer		(void);
		Serializer&		operator=(const Serializer &Sample);
		
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

std::ostream	&operator<<(std::ostream &os, const Serializer &Sample);

#endif
