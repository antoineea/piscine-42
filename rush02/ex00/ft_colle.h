/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:05:48 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 21:22:43 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H
# define FT_COLLE_H

char	*pipe_to_array(void);
int		count_array(int *nb_lines, int *nb_cols, char *str);
void	check_colles(char *str, int size_x, int size_y,
	char (*p[5]) (int, int, int, int));
void	print_colle(int colle_nb, int nbcols, int nblines, int pipes);
void	print_result(char (*p[5]) (int, int, int, int), int nbcols,
	int nblines);

#endif
