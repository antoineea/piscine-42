/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:26:39 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/12 21:15:27 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int y;
	int match_start;

	y = 0;
	i = -1;
	match_start = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		if (str[i] == to_find[y++])
		{
			if (match_start == -1)
				match_start = i;
			if (to_find[y + 1] == '\0')
				return (str + match_start);
		}
		else
		{
			y = 0;
			match_start = -1;
		}
	}
	return (0);
}
