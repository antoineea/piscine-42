/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 06:26:44 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/14 06:59:27 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_arrs(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strlen(char **a)
{
	int i;

	i = 0;
	while (a[i][0])
		i++;
	return (i);
}

int		ft_compact(char **tab, int length)
{
	int i;
	int y;
	int swaps;

	swaps = 0;
	i = -1;
	while (++i < length - 1)
	{
		if (!tab[i][0])
		{
			y = i;
			while (!tab[y][0] && y < length - 1)
			{
				y++;
			}
			if (y != length)
			{
				ft_swap_arrs(&tab[y], &tab[i]);
				swaps = i;
			}
		}
	}
	return (ft_strlen(tab));
}
