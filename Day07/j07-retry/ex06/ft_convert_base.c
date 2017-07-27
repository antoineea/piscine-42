/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:55:18 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/18 02:32:14 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str, int str_len)
{
	char	tmp;
	int		i;
	int		max_index;

	i = 0;
	max_index = (str_len / 2) - 1;
	while (i <= max_index)
	{
		tmp = str[i];
		str[i] = str[str_len - 1 - i];
		str[str_len - 1 - i] = tmp;
		i++;
	}
	return (str);
}

int		symbol_to_digit(char *base, char digit)
{
	int i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == digit)
			return (i);
	}
	return (0);
}

int		nb_to_dec(char *nbr, int base_from, char *base, int nbrlen)
{
	int nb_tmp;
	int power;
	int tmp;
	int i;

	power = 1;
	nb_tmp = 0;
	i = -1;
	while (nbr[++i])
	{
		power = 1;
		tmp = nbrlen - i - 1;
		while (tmp >= 1)
		{
			power *= base_from;
			tmp--;
		}
		nb_tmp += power * symbol_to_digit(base, nbr[i]);
	}
	return (nb_tmp);
}

char	*ft_dec_base(int n, char *base, int d_base_l)
{
	char	*str;
	int		i;
	int		count;

	count = 0;
	str = 0;
	i = 0;
	str = (char*)malloc(sizeof(char) * 75);
	while (n / d_base_l > 0)
	{
		str[count] = base[n % d_base_l];
		n /= d_base_l;
		count++;
	}
	str[count] = base[n % d_base_l];
	ft_strrev(str, count + 1);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int dec;
	int from_size;
	int to_size;
	int nb_size;

	from_size = -1;
	while (base_from[++from_size])
	{
	}
	nb_size = -1;
	while (nbr[++nb_size])
	{
	}
	to_size = -1;
	while (base_to[++to_size])
	{
	}
	dec = nb_to_dec(nbr, from_size, base_from, nb_size);
	return (ft_dec_base(dec, base_to, to_size));
}
