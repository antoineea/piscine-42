/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 14:20:43 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/12 20:52:45 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	|| (c >= '0' && c <= '9'));
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i])
	{
		if (!ft_is_alphanum(str[i]))
			return (0);
		i++;
	}
	return (1);
}
