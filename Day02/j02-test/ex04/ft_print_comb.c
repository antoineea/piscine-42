/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:25:11 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/07 11:00:20 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_nbs(int nb1, int nb2, int nb3);

void	ft_print_comb(void)
{
	int nb1;
	int nb2;
	int nb3;

	nb1 = 0;
	while (nb1 <= 9)
	{
		nb2 = 0;
		while (nb2 <= 9)
		{
			nb3 = 0;
			while (nb3 <= 9)
			{
				if (nb1 < nb2 && nb2 < nb3)
				{
					ft_print_nbs(nb1, nb2, nb3);
				}
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}

void	ft_print_nbs(int nb1, int nb2, int nb3)
{
	ft_putchar(nb1 + '0');
	ft_putchar(nb2 + '0');
	ft_putchar(nb3 + '0');
	if (nb1 != 7 || nb2 != 8 || nb3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
