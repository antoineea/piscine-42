/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:15:03 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/07 11:40:25 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		str_len;
	char	tmp;
	int		i;
	int		max_index;

	i = 0;
	str_len = ft_strlen(str);
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
