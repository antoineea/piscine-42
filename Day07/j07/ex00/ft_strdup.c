/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:24:55 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/17 22:35:23 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
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
