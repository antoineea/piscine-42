/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:15:07 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/12 20:51:25 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	|| (c >= '0' && c <= '9'));
}

int		ft_islowcaps(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_in_word;

	i = 0;
	is_in_word = 0;
	while (str[i])
	{
		if (is_in_word && !ft_is_alphanum(str[i]))
			is_in_word = 0;
		else if (!is_in_word && ft_is_alphanum(str[i]))
		{
			is_in_word = 1;
			if (ft_islowcaps(str[i]))
				str[i] += 'A' - 'a';
		}
		else if (is_in_word && str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= 'A' - 'a';
		i++;
	}
	return (str);
}
