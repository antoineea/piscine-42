/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 03:54:22 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/18 20:42:17 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*n_str;
	int		i;

	i = -1;
	n_str = (char*)malloc(sizeof(char) * ft_sizeof(src));
	while (src[++i])
		n_str[i] = src[i];
	n_str[i] = '\0';
	return (n_str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*arr;
	int					i;

	i = -1;
	arr = (struct s_stock_par*)malloc((ac + 1) * sizeof(t_stock_par));
	while (++i < ac)
	{
		arr[i].size_param = ft_sizeof(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		arr[i].tab = ft_split_whitespaces(av[i]);
	}
	arr[i].str = 0;
	return (arr);
}
