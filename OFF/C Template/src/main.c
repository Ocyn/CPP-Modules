/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 04:36:22 by ocyn              #+#    #+#             */
/*   Updated: 2024/03/11 04:29:03 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	main(int argc, char **argv)
{
	printf("\nHello World !\n");
	for (int id = 1; argv[id] && id <= argc; id++)
		ft_test(1, argv[id], id);
	return (0);
}
