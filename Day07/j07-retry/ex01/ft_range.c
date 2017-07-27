/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:38:47 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/17 22:37:41 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *nb_arr;
	int i;

	i = -1;
	if (min >= max)
		return (0);
	nb_arr = (int*)malloc(sizeof(int) * (max - min));
	while (++i < max - min)
		nb_arr[i] = min + i;
	return (nb_arr);
}
