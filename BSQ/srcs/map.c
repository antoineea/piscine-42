/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:09:24 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 23:09:25 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	free_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->height)
	{
		free(map->map[i]);
		i++;
	}
	free(map->map);
}

int		destroy_map(t_map **map)
{
	free_map(*map);
	free(*map);
	*map = 0;
	return (0);
}

int		parse_first_line(int file, t_map *map)
{
	char	buffer;
	char	buffer_arr[50];
	int		i;
	int		y;

	buffer = 0;
	i = 0;
	y = -1;
	while (buffer != '\n')
	{
		read(file, &buffer, 1);
		buffer_arr[i] = buffer;
		i++;
	}
	if (i <= 4)
		return (0);
	map->empty = buffer_arr[i - 4];
	map->obstacle = buffer_arr[i - 3];
	map->full = buffer_arr[i - 2];
	map->height = 0;
	while (++y < i - 4)
		map->height = (map->height * 10) + (buffer_arr[y] - '0');
	if (map->height == 0)
		return (0);
	return (1);
}

int		ft_call_destroy(t_map *map, t_bigger_square *bs, char **tab)
{
	if (tab != 0)
		ft_free_copy_tab(tab, map->height);
	if (map != 0)
		destroy_map(&map);
	if (bs != 0)
		destroy_bigger(&bs);
	return (0);
}

int		parse_map(int fd, char *filename)
{
	int				file;
	t_map			*map;
	t_bigger_square *bs;
	char			**tab;

	if ((file = ft_file_open(fd, filename)) == -1)
		return (0);
	map = 0;
	tab = 0;
	bs = 0;
	if ((map = (t_map*)malloc(sizeof(t_map))) == 0)
		return (0);
	if (parse_first_line(file, map) == 0)
		return (0);
	if (!ft_read_file(file, map->height, map))
		return (ft_call_destroy(map, bs, tab));
	tab = ft_copy_tab(map);
	if (!ft_read_value(map->map, map->height, map->width, map))
		return (ft_call_destroy(map, bs, tab));
	if (!(bs = ft_check_value(map->map, map->height, map->width)))
		return (0);
	bs->sq_char = map->full;
	print_map(tab, bs, map->height, map->width);
	ft_call_destroy(map, bs, tab);
	return (1);
}
