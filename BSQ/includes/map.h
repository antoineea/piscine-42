/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:09:36 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 23:09:37 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <stdlib.h>
# include <unistd.h>
# include "read_value.h"
# include "read_file.h"
# include "check_value.h"
# include "bigger_square.h"
# include "print_map.h"
# include "copy_tab.h"
# include "file_open.h"
# include "t_map.h"

int				parse_first_line(int file, t_map *map);
int				parse_map(int fd, char *filename);
int				destroy_map(t_map **map);
void			free_map(t_map *map);
int				ft_call_destroy(t_map *map, t_bigger_square *bs, char **tab);

#endif
