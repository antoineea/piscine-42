/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemieux <mlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:13:03 by mlemieux          #+#    #+#             */
/*   Updated: 2017/07/16 12:40:53 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "static_tab.h"

int		fill_tab(int tab[9][9])
{
	int	x;
	int	y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			tab[y][x] = 0;
			x++;
		}
		y++;
	}
	return (**tab);
}

void	print_tab(int tab[9][9])
{
	int	x;
	int	y;

	y = 0;
	while (y != 9)
	{
		x = 0;
		while (x < 9)
		{
			if (x == 8)
				ft_putchar(tab[y][x] + '0');
			else
			{
				ft_putchar(tab[y][x] + '0');
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}
