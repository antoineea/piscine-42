/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 22:50:00 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/19 21:24:42 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s2[i] < s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		min;
	char	*tmp;

	j = -1;
	while (tab[++j] != 0)
	{
		min = j;
		i = j;
		while (tab[++i])
		{
			if (ft_strcmp(tab[i], tab[min]) < 0)
				min = i;
		}
		if (min != j)
		{
			tmp = tab[j];
			tab[j] = tab[min];
			tab[min] = tmp;
		}
	}
}
