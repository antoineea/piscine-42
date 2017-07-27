/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 13:02:35 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 23:16:24 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_value.h"

void			ft_check_compteur(int **map, int width, int i[2],
	t_bigger_square *sq)
{
	t_compteur	c;

	if (map[i[0]][i[1]] > 0)
	{
		c.c = map[i[0]][i[1]];
		c.c_left = i[1] - 1;
		c.c_left_bis = 0;
		c.c_right = i[1];
		c.c_right_bis = 0;
		while (c.c_left >= 0 && map[i[0]][c.c_left] >= c.c &&
			map[i[0]][c.c_left] != 0)
		{
			c.c_left--;
			c.c_left_bis++;
		}
		while (c.c_right <= width && map[i[0]][c.c_right] >= c.c &&
			map[i[0]][c.c_right] != 0)
		{
			c.c_right++;
			c.c_right_bis++;
		}
		if (c.c_right_bis + c.c_left_bis >= c.c)
			new_square(i[0], i[1] - c.c_left_bis, c.c, sq);
	}
}

t_bigger_square	*ft_check_value(int **map, int height, int width)
{
	int				i[2];
	t_bigger_square	*sq;

	i[0] = 0;
	i[1] = 0;
	sq = create_bigger();
	while (i[0] < height)
	{
		i[1] = 0;
		while (i[1] < width)
		{
			ft_check_compteur(map, width, i, sq);
			(i[1])++;
		}
		(i[0])++;
	}
	return (sq);
}
