/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:45:21 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/14 01:37:11 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	handle(char *str, int i)
{
	int y;

	y = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		while (++y < 43)
		{
			str[i]++;
			if (str[i] == 'z' + 1)
				str[i] = 'a';
		}
	}
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		while (++y < 43)
		{
			str[i]++;
			if (str[i] == 'Z' + 1)
				str[i] = 'A';
		}
	}
}

char	*ft_rot42(char *str)
{
	int i;
	int y;

	i = -1;
	y = 0;
	while (str[++i])
		handle(str, i);
	return (str);
}
