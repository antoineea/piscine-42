/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 13:02:56 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 20:37:48 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_VALUE_H
# define CHECK_VALUE_H

# include "bigger_square.h"
# include "map.h"
# include "read_value.h"
# include "read_file.h"

t_bigger_square	*ft_check_value(int **map, int height, int width);

typedef struct	s_compteur
{
	int				c;
	int				c_left_bis;
	int				c_left;
	int				c_right;
	int				c_right_bis;
}				t_compteur;

void			ft_check_compteur(int **map, int width, int i[2],
	t_bigger_square *sq);
#endif
