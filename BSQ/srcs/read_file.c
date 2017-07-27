/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 12:12:10 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 23:10:34 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

void	ft_copy(int *src, int *dest, int size)
{
	int i;

	i = -1;
	while (++i < size)
	{
		dest[i] = src[i];
	}
}

int		*ft_realloc(int *array, int *oldsize)
{
	int *temp_array;
	int newsize;

	newsize = *oldsize + REALL_SIZE;
	if (*oldsize == 0)
	{
		if (!(array = (int*)malloc(sizeof(int) * newsize)))
			return (0);
		else
			return (array);
	}
	if (!(temp_array = (int*)malloc(sizeof(int) * *oldsize)))
		return (0);
	ft_copy(array, temp_array, *oldsize);
	free(array);
	if (!(array = (int*)malloc(sizeof(int) * newsize)))
		return (0);
	ft_copy(temp_array, array, *oldsize);
	free(temp_array);
	*oldsize += REALL_SIZE;
	return (array);
}

int		check_char(char c, t_map *map)
{
	if (c != map->empty && c != map->obstacle && c != '\n')
		return (0);
	return (1);
}

int		ft_return_j(t_map *map, int j)
{
	map->height = j;
	return (0);
}

int		ft_read_file(int file, int line, t_map *map)
{
	char	buffer;
	int		i;
	int		j;
	int		real;

	real = REALL_SIZE;
	i = 0;
	j = 0;
	map->width = -1;
	if (!(map->map = (int**)malloc(sizeof(int*) * (line + 1))))
		return (0);
	if (!(map->map[0] = (int*)malloc(sizeof(int) * REALL_SIZE)))
		return (0);
	while ((read(file, &buffer, 1)) > 0)
	{
		if (!check_char(buffer, map))
			return (ft_return_j(map, j));
		if (buffer != '\n' && i % real == 0)
			map->map[j] = ft_realloc(map->map[j], &real);
		if (buffer != '\n')
			map->map[j][i++] = buffer;
		else if (ft_read_file1(map, &j, &i) == 0)
			return (0);
	}
	return (check_lines(map, j));
}
