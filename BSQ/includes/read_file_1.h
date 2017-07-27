/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file_1.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 21:59:41 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 23:15:25 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_FILE_1_H
# define READ_FILE_1_H

# include "read_file.h"
# include "t_map.h"
# define REALL_SIZE 10

int		ft_read_file1(t_map *map, int *j, int *i);
int		check_lines(t_map *map, int j);

#endif
