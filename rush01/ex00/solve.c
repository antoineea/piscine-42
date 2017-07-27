/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 19:46:34 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/16 12:17:24 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "valid.h"
#include "solve.h"

void	solve(int array[9][9])
{
	solve_recurs(array, 0, 0);
}

int		solve_recurs(int array[9][9], int x, int y)
{
	int candidate_nbr;

	if (x == 8 && y == 9)
		return (1);
	if (x == 8 && array[x][y] != 0)
		return (solve_recurs(array, 0, y + 1));
	else if (x < 8 && array[x][y] != 0)
		return (solve_recurs(array, x + 1, y));
	candidate_nbr = 0;
	while (++candidate_nbr <= 9)
	{
		if (check_solution(candidate_nbr, array, x, y))
		{
			array[x][y] = candidate_nbr;
			if (x == 8 && solve_recurs(array, 0, y + 1))
				return (1);
			if (x < 8 && solve_recurs(array, x + 1, y))
				return (1);
		}
	}
	array[x][y] = 0;
	return (0);
}
