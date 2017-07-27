/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_square.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:53:34 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 20:58:08 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGGER_SQUARE_H
# define BIGGER_SQUARE_H

# include <stdlib.h>
# include "t_map.h"

typedef struct		s_bigger_square
{
	int		sq_line;
	int		sq_col;
	int		size;
	char	sq_char;
}					t_bigger_square;

t_bigger_square		*create_bigger();
int					new_square(int line, int col, int size,
	t_bigger_square *sq);
void				destroy_bigger(t_bigger_square **sq);

#endif
