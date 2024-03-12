/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:07 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/12 05:00:23 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

class	PhoneBook {

	public:
		int		List_len;
		Contact	Contacts[8];
		PhoneBook ( void );
		~PhoneBook ( void );
};

#endif