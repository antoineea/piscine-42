/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:53:26 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 22:29:49 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "copy_tab.h"

char	**ft_copy_tab(t_map *map)
{
	char	**tab;
	int		i;
	int		j;

	if (!(tab = (char **)malloc(sizeof(char *) * (map->height + 1))))
		return (0);
	i = 0;
	while (i < map->height)
	{
		if (!(tab[i] = (char *)malloc(sizeof(char) * (map->width + 1))))
			return (0);
		i++;
	}
	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			tab[i][j] = map->map[i][j];
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_free_copy_tab(char **tab, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
