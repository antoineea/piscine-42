/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 21:59:34 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 23:15:09 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file_1.h"

int		ft_read_file1(t_map *map, int *j, int *i)
{
	if (map->width != -1 && *i != map->width)
		return (ft_return_j(map, *j));
	else if (map->width == -1)
		map->width = *i;
	*i = 0;
	(*j)++;
	if (!(map->map[*j] = (int*)malloc(sizeof(int) * REALL_SIZE)))
		return (0);
	return (1);
}

int		check_lines(t_map *map, int j)
{
	return (map->height == j);
}
