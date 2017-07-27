/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 05:12:37 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/19 18:02:26 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tabf;
	int	i;

	tabf = 0;
	i = -1;
	tabf = (int*)malloc(length * sizeof(int));
	while (++i < length)
		tabf[i] = f(tab[i]);
	return (tabf);
}
