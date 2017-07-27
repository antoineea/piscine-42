/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 16:55:28 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/20 03:23:56 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int nope;

	i = 0;
	nope = 0;
	while (i < length - 1 && !nope)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			nope = 1;
	}
	if (!nope)
		return (1);
	i = 0;
	nope = 0;
	while (i < length - 1 && !nope)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			nope = 1;
	}
	return (!nope) ? 1 : 0;
}
