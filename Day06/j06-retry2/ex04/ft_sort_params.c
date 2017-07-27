/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:44:01 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/13 03:39:39 by msteffen         ###   ########.fr       */
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

void	ft_swap_arrs(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
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
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap_arrs(&argv[i], &argv[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	dump_argv(argv, argc);
	return (0);
}
