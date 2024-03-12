/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 04:12:23 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/11 04:29:31 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_test(int indent, char *str, int data)
{
	while (--indent >= 0)
		printf("\t");
	printf("[%d]:  ", data);
	printf("%s", str);
	printf("\n");
}
