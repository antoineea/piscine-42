/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 04:21:06 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/20 10:58:46 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void				ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;
	if (nb == -2147483648)
	{
		n = -nb;
		ft_putchar('-');
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

void				ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void				ft_print_words_tables(char **tab)
{
	int i;

	i = -1;
	while (tab[++i])
	{
		ft_putstr(tab[i]);
	}
}

void				ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
	}
}
