/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:03:39 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/09 13:26:12 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush_print(int column, int row, int size_x, int size_y)
{
	if ((column == 0 && row == 0)
	|| (column == size_x - 1 && row == 0))
		ft_putchar('A');
	else if ((column == 0 && row == size_y - 1)
		|| (column == size_x - 1 && row == size_y - 1))
		ft_putchar('C');
	else if (column == 0 || row == 0 || column == size_x - 1
		|| row == size_y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int size_x, int size_y)
{
	int column;
	int row;

	if (size_x < 0 || size_y < 0)
		return ;
	row = 0;
	while (row < size_y)
	{
		column = 0;
		while (column < size_x)
		{
			rush_print(column, row, size_x, size_y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
