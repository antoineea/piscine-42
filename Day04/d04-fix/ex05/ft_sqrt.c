/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:52:23 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/11 17:44:37 by msteffen         ###   ########.fr       */
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

int			ft_sqrt(int nb)
{
	double babylonian_result;
	double babylonian_decimal;

	babylonian_result = ft_bab_doublesqrt(nb);
	babylonian_decimal = babylonian_result - (int)babylonian_result;
	if (nb < 0)
		return (0);
	if (babylonian_decimal < 0.00001)
		return (int)babylonian_result;
	else
		return (0);
}
