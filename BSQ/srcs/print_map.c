/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:51:20 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 23:31:37 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_map.h"

int		print_map(char **tab, t_bigger_square *square, int height, int width)
{
	int		i;
	int		j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (i > square->sq_line - square->size && i <= square->sq_line &&
			j >= square->sq_col && j < square->sq_col + square->size)
				write(1, &(square->sq_char), 1);
			else
				write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
