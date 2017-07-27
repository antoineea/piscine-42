/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:13:39 by dshults           #+#    #+#             */
/*   Updated: 2017/07/16 15:47:15 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "valid.h"

int		check_solution(int k, int table[9][9], int x, int y)
{
	int	j;
	int i;

	j = 0;
	while (j < 9)
	{
		if (table[x][j] == k)
			return (0);
		j++;
	}
	i = 0;
	while (i < 9)
	{
		if (table[i][y] == k)
			return (0);
		i++;
	}
	return (check_solution_block(k, table, x, y));
}

int		check_solution_block(int k, int table[9][9], int x, int y)
{
	int	ii;
	int	jj;
	int	j;
	int i;

	ii = x - (x % 3);
	jj = y - (y % 3);
	i = ii;
	while (i < ii + 3)
	{
		j = jj;
		while (j < jj + 3)
		{
			if (table[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_solution2(int k, int table[9][9], int x, int y)
{
	int	j;
	int i;

	j = 0;
	while (j < 9)
	{
		if ((table[x][j] == k) && (j != y))
			return (0);
		j++;
	}
	i = 0;
	while (i < 9)
	{
		if ((table[i][y] == k) && (i != x))
			return (0);
		i++;
	}
	return (check_solution_block2(k, table, x, y));
}

int		check_solution_block2(int k, int table[9][9], int x, int y)
{
	int	ii;
	int	jj;
	int	j;
	int i;

	ii = x - (x % 3);
	jj = y - (y % 3);
	i = ii;
	while (i < ii + 3)
	{
		j = jj;
		while (j < jj + 3)
		{
			if ((table[i][j] == k) && (i != x) && (j != y))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_input(int table[9][9])
{
	int	ii;
	int	jj;

	ii = 0;
	while (ii < 9)
	{
		jj = 0;
		while (jj < 9)
		{
			if (table[ii][jj] != 0
				&& (!check_solution2(table[ii][jj], table, ii, jj)
				|| !check_solution_block2(table[ii][jj], table, ii, jj)))
			{
				return (0);
			}
			jj++;
		}
		ii++;
	}
	return (1);
}
