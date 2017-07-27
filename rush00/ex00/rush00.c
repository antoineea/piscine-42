/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:54:27 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 22:57:59 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	print_position(int pos_h, int pos_v, int taille_h, int taille_v)
{
	if ((pos_h == 0 && pos_v == 0)
	|| (pos_h == 0 && pos_v == taille_v - 1))
		ft_putchar('o');
	else if ((pos_h < taille_h - 1 && pos_v == 0)
	|| (pos_h < taille_h - 1 && pos_v == taille_v - 1))
		ft_putchar('-');
	else if ((pos_h == taille_h - 1 && pos_v == 0)
	|| (pos_h == taille_h - 1 && pos_v == taille_v - 1))
		ft_putchar('o');
	else if ((pos_v < taille_v - 1 && pos_h == 0)
	|| (pos_v < taille_v - 1 && pos_h == taille_h - 1))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int taille_h, int taille_v)
{
	int position_h;
	int position_v;

	if (taille_h < 0 || taille_v < 0)
		return ;
	position_v = 0;
	while (position_v < taille_v)
	{
		position_h = 0;
		while (position_h < taille_h)
		{
			print_position(position_h, position_v, taille_h, taille_v);
			position_h++;
		}
		ft_putchar('\n');
		position_v++;
	}
}

#include <stdlib.h>
int main(int a, char **b)
{
	rush(atoi(b[1]), atoi(b[2]));
}
