/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:01:13 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 22:35:17 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "strings.h"

char	*pipe_to_array(void)
{
	int		i;
	char	c;
	char	*buffer;
	int		size;

	i = 0;
	size = 256;
	buffer = (char *)malloc(size * sizeof(char));
	while (read(0, &c, 1) > 0)
	{
		if (i > size - 2)
		{
			buffer[i] = '\0';
			size = inc_array(&buffer, size);
		}
		buffer[i++] = c;
	}
	buffer[i] = '\0';
	return (buffer);
}

int		count_array(int *nb_lines, int *nb_cols, char *str)
{
	int i;
	int x;
	int prev_col;

	i = -1;
	x = 0;
	prev_col = -1;
	while (str[++i])
	{
		x++;
		if (str[i] == '\n' && prev_col == -1)
			prev_col = i;
		if (str[i] == '\n' && prev_col != x - 1)
			return (1);
		if (str[i] == '\n')
		{
			x = 0;
			*nb_lines += 1;
		}
	}
	*nb_cols = prev_col;
	return (0);
}

void	check_colles(char *str, int sz_x, int sz_y,
	char (*p[5]) (int, int, int, int))
{
	int i;
	int y;
	int in;

	sz_x--;
	sz_y--;
	i = 0;
	in = 0;
	while (i < sz_x + 1)
	{
		y = 0;
		while (y < sz_y + 1)
		{
			if (str[in] == '\n')
				in++;
			p[0] = (p[0] != 0 && p[0](i, y, sz_x, sz_y) != str[in]) ? 0 : p[0];
			p[1] = (p[1] != 0 && p[1](i, y, sz_x, sz_y) != str[in]) ? 0 : p[1];
			p[2] = (p[2] != 0 && p[2](i, y, sz_x, sz_y) != str[in]) ? 0 : p[2];
			p[3] = (p[3] != 0 && p[3](i, y, sz_x, sz_y) != str[in]) ? 0 : p[3];
			p[4] = (p[4] != 0 && p[4](i, y, sz_x, sz_y) != str[in]) ? 0 : p[4];
			y++;
			in++;
		}
		i++;
	}
}

int		print_colle(int colle_nb, int nbcols, int nblines, int pipes)
{
	if (pipes)
		write(1, " || ", 4);
	write(1, "[colle-0", 8);
	ft_putnbr(colle_nb);
	write(1, "] [", 3);
	ft_putnbr(nblines);
	write(1, "] [", 3);
	ft_putnbr(nbcols);
	write(1, "]", 1);
	return (1);
}

void	print_result(char (*p[5]) (int, int, int, int), int nbcols, int nblines)
{
	int found_one;

	found_one = 0;
	if (nbcols <= 0 || nblines <= 0)
	{
		write(1, "aucune\n", 7);
		return ;
	}
	if (p[0] == 0 && p[1] == 0 && p[2] == 0 && p[3] == 0 && p[4] == 0)
		write(1, "aucune", 6);
	if (p[0] != 0)
		found_one = print_colle(0, nbcols, nblines, 0);
	if (p[1] != 0)
		found_one = print_colle(1, nbcols, nblines, found_one);
	if (p[2] != 0)
		found_one = print_colle(2, nbcols, nblines, found_one);
	if (p[3] != 0)
		found_one = print_colle(3, nbcols, nblines, found_one);
	if (p[4] != 0)
		print_colle(4, nbcols, nblines, found_one);
	write(1, "\n", 1);
}
