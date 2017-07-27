/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:47:00 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/12 15:14:48 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_recurs(int nbr, char *base, int base_length)
{
	if (nbr != 0)
	{
		ft_putnbr_recurs(nbr / base_length, base, base_length);
		ft_putchar(base[nbr % base_length]);
	}
}

int		base_check(char *base)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[y] == '-')
			return (0);
		while (base[y] != '\0')
		{
			if (base[i] == base[y] && i != y)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	nb;

	nb = nbr;
	base_size = ft_strlen(base);
	if (base_size <= 1)
		return ;
	if (!base_check(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ft_putnbr_recurs(nb, base, base_size);
}
