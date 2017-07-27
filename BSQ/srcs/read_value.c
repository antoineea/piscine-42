/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:29:31 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 20:40:05 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_value.h"

int	ft_read_value(int **map, int height, int width, t_map *map_s)
{
	int		i;
	int		j;
	int		incr;

	i = 0;
	incr = 1;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (i == 0 && map[i][j] == map_s->empty)
				map[i][j] = 1;
			else if (i == 0 && map[i][j] == map_s->obstacle)
				map[i][j] = 0;
			else if (map[i][j] == map_s->empty)
				map[i][j] = map[i - 1][j] + 1;
			else if (map[i][j] == map_s->obstacle)
				map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (1);
}
