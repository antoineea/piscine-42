/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:07:28 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/18 00:32:50 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *nb_arr;
	int i;

	nb_arr = 0;
	i = -1;
	if (min >= max)
		return (0);
	nb_arr = (int*)malloc(sizeof(int) * (max - min));
	while (++i < max - min)
	{
		nb_arr[i] = min + i;
	}
	return (nb_arr);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == 0)
		return (0);
	return (max - min);
}
