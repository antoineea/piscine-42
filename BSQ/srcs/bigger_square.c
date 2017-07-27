/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:47:50 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 23:33:13 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigger_square.h"

t_bigger_square		*create_bigger(void)
{
	t_bigger_square *sq;

	if (!(sq = (t_bigger_square*)malloc(sizeof(t_bigger_square))))
		return (0);
	sq->sq_line = -1;
	sq->sq_col = -1;
	sq->size = -1;
	return (sq);
}

int					new_square(int line, int col, int size, t_bigger_square *sq)
{
	if ((sq->sq_line == -1 || size > sq->size))
	{
		sq->sq_line = line;
		sq->sq_col = col;
		sq->size = size;
		return (1);
	}
	else
		return (0);
	if (line < sq->sq_line)
	{
		sq->sq_line = line;
		sq->sq_col = col;
		sq->size = size;
		return (1);
	}
	if (col < sq->sq_col)
	{
		sq->sq_line = line;
		sq->sq_col = col;
		sq->size = size;
		return (1);
	}
	return (0);
}

void				destroy_bigger(t_bigger_square **sq)
{
	free(*sq);
	*sq = 0;
}
