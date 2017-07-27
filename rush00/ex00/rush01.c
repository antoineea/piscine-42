/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:26:45 by plam              #+#    #+#             */
/*   Updated: 2017/07/23 22:57:57 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	print_rush(int pos_x, int pos_y, int col, int row)
{
	if ((pos_x == 0 && pos_y == 0)
	|| (pos_x == col - 1 && pos_y == row - 1 && row > 1 && col > 1))
		ft_putchar('/');
	else if ((row == 1 && pos_x == col - 1 && pos_y == row - 1)
			|| (pos_x == 0 && pos_y == row - 1)
			|| (pos_x == col - 1 && pos_y == 0))
		ft_putchar('\\');
	else if (pos_x == 0 || pos_y == 0
	|| pos_x == col - 1 || pos_y == row - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int col, int row)
{
	int pos_x;
	int pos_y;

	if (col < 0 || row < 0)
		return ;
	pos_x = 0;
	pos_y = 0;
	while (pos_y < row)
	{
		pos_x = 0;
		while (pos_x < col)
		{
			print_rush(pos_x, pos_y, col, row);
			pos_x++;
		}
		pos_y++;
		ft_putchar('\n');
	}
}

#include <stdlib.h>
int main(int a, char **b)
{
	rush(atoi(b[1]), atoi(b[2]));
}
