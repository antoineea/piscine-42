/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:44:01 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/12 19:44:04 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s2[i] < s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	dump_argv(char **argv, int argc)
{
	int i;

	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		min;
	char	tmp[1000000];

	j = 0;
	while (++j < argc - 1)
	{
		min = j;
		i = j;
		while (++i < argc)
		{
			if (ft_strcmp(argv[i], argv[min]) < 0)
				min = i;
		}
		if (min != j)
		{
			ft_strcpy(tmp, argv[j]);
			ft_strcpy(argv[j], argv[min]);
			ft_strcpy(argv[min], tmp);
		}
	}
	dump_argv(argv, argc);
	return (0);
}
