/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:35:10 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/07 11:00:10 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_digits(int nb1, int nb2);

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 99)
	{
		nb2 = 0;
		while (nb2 <= 99)
		{
			if (nb1 < nb2)
			{
				ft_print_digits(nb1, nb2);
			}
			nb2++;
		}
		nb1++;
	}
}

void	ft_print_digits(int nb1, int nb2)
{
	ft_putchar((nb1 / 10) + '0');
	ft_putchar((nb1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((nb2 / 10) + '0');
	ft_putchar((nb2 % 10) + '0');
	if (nb1 != 98 || nb2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
