/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocyn <ocyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:31:53 by jcuzin            #+#    #+#             */
/*   Updated: 2024/10/07 18:05:26 by ocyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		data;
	data.value = 42;

	std::cout << "Base at the beginning: " << data.value << " | [" << &data.value << "] " << std::endl;
	uintptr_t	ptr = Serializer::serialize(&data);
	std::cout << "After Serializering: " << ptr << " | [" << &ptr << "] " << std::endl;

	Data		*n_data = Serializer::deserialize(ptr);
	std::cout << "After Deserializering: " << n_data->value << " | [" << &n_data->value << "] " << std::endl;
	return (0);
}
