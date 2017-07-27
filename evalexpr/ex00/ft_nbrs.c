/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:12:48 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 00:29:19 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nbrs.h"
#include "ft_char.h"

void	ft_putnbr_overflow(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr_overflow();
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb <= 9)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar((nb % 10) + '0');
		}
	}
}

int		ft_legal_char(char *str)
{
	int i;

	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
	(str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f'))
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int is_negative;
	int nb;

	is_negative = 0;
	nb = 0;
	i = ft_legal_char(str);
	if (str[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (is_negative)
		return (nb * -1);
	else
		return (nb);
}

int		nb_digits(int nb)
{
	if (nb >= -9 && nb <= 0)
		return (2);
	if (nb <= 9 && nb >= 0)
		return (1);
	return (1 + nb_digits(nb / 10));
}
