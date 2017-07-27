/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 08:49:29 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/11 17:43:18 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double		ft_bab_doublesqrt(int nb)
{
	double precision;
	double s;

	precision = 0.00001;
	s = nb;
	while ((s - nb / s) > precision)
		s = (s + nb / s) / 2;
	return (s);
}

int			ft_is_prime(int nb)
{
	int i;
	int sq;

	if (nb < 0)
		return (0);
	i = (nb % 2 == 0) ? 2 : 3;
	sq = ft_bab_doublesqrt(nb);
	if (nb == 0 || nb == 1 || (nb % 2 == 0 && nb > 2))
		return (0);
	while (i < sq + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
