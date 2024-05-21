/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:34 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 15:34:45 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

#ifndef	CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class	Contact {

	public:
		Contact 	(void);
		~Contact	(void);
		int			id;
		std::string	Get_Firstname();
		std::string	Get_Lastname();
		std::string	Get_Nickname();
		std::string	Get_Phonenumber();
		std::string	Get_Darkestsecret();
		void		ExtendData( void );
		int			Setup_all(int list_size);

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
};

#endif
