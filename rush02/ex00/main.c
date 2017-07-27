/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 20:53:26 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 21:52:10 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char	*str;
	int		nb_cols;
	int		nb_lines;
	char	(*p[5]) (int, int, int, int);

	nb_cols = 0;
	nb_lines = 0;
	str = pipe_to_array();
	p[0] = &check_colle0;
	p[1] = &check_colle1;
	p[2] = &check_colle2;
	p[3] = &check_colle3;
	p[4] = &check_colle4;
	count_array(&nb_cols, &nb_lines, str);
	check_colles(str, nb_cols, nb_lines, p);
	print_result(p, nb_cols, nb_lines);
	return (0);
}
