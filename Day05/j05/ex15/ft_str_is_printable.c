/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 14:57:53 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/10 17:00:23 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_printable(char c)
{
	return (c >= 32 && c != 127);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i])
	{
		if (!ft_is_printable(c))
			return (0);
		i++;
	}
	return (1);
}
