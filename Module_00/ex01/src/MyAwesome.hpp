/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesome.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:27:01 by jcuzin            #+#    #+#             */
/*   Updated: 2024/05/21 14:19:00 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWESOME_HPP
# define MYAWESOME_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include "Contact.class.hpp"
# include "PhoneBook.class.hpp"

void			Exiting( void );
std::string		Readentry( std::string Prompt );
void			Column( std::string Title );
void			ShowColumns( std::string One, std::string Two, std::string Three);

#endif