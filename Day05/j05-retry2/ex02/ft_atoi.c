/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:18:26 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/10 17:51:54 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
