/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:42:38 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/09 14:58:15 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_legal_char(char c)
{
	if (c == ' ' || c == '\t' || c == '\r' || c == '\f' || c == '\n'
	|| c == '\v')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int int_nb;
	int i;
	int is_negative;

	int_nb = 0;
	i = 0;
	is_negative = 1;
	while (ft_legal_char(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && int_nb == 0)
			is_negative = -1;
		else if (str[i] == '+' && int_nb == 0)
			is_negative = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			int_nb = (int_nb * 10) + (str[i] - '0') * is_negative;
		else
			return (int_nb);
		i++;
	}
	return (int_nb);
}
