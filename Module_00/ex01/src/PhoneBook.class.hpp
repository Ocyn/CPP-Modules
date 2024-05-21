/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:07 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 15:10:22 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

class	PhoneBook {

	public:
		PhoneBook	( void );
		~PhoneBook	( void );
		void		Set_Listlen(int Set);
		void		Set_Index(int Set);
		void		Index_up();
		int			Get_Index();
		int			Get_Listlen();
		int			SetupContact();
		int			Showing_List();
		void		SearchContact();
	private:
		int		List_len;
		int		index;
		Contact	Contacts[8];
};

#endif