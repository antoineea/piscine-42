/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:28:28 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 22:01:30 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_FILE_H
# define READ_FILE_H

# define REALL_SIZE 10
# include "map.h"
# include "t_map.h"
# include "read_file_1.h"

int		*ft_realloc(int *array, int *oldsize);
int		check_char(char c, t_map *map);
int		ft_return_j(t_map *map, int j);
void	ft_copy(int *src, int *dest, int size);
int		ft_read_file(int file, int line, t_map *map);

#endif
