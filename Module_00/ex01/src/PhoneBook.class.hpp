/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:07 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/08 01:48:56 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

class	PhoneBook {

	public:
		int		List_len;
		void	*ContactId[8];
		PhoneBook ( void );
		~PhoneBook ( void );
		void	Search( void );
		void	AddContact( void );
		void	DestroyBook( void );
};

#endif