/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 02:31:35 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/14 03:34:13 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		ft_match_word(char *str, char *to_find)
{
	int i;
	int j;

	i = -1;
	j = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[++i])
	{
		if (str[i] == ' ')
			j = 0;
		else if (to_find[j] == str[i])
		{
			if (!to_find[j + 1])
				return (1);
			j++;
		}
		else
			return (0);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= 'A' - 'a';
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[++i])
	{
		ft_strlowcase(argv[i]);
		if (ft_match_word(argv[i], "president")
		|| ft_match_word(argv[i], "attack") || ft_match_word(argv[i], "powers"))
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
	}
	return (0);
}
