/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:00:12 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/07 13:47:26 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_elements(int *tab, int a, int b)
{
	int temp;

	temp = tab[a];
	tab[a] = tab[b];
	tab[b] = temp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int min;

	j = 0;
	while (j < size)
	{
		min = j;
		i = j + 1;
		while (i < size)
		{
			if (tab[i] < tab[min])
			{
				min = i;
			}
			i++;
		}
		if (min != j)
		{
			ft_swap_elements(tab, j, min);
		}
		j++;
	}
}
