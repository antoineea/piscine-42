/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:15:06 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/11 15:02:53 by msteffen         ###   ########.fr       */
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

int			ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
