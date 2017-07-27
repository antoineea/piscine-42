/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 22:28:15 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/18 03:44:13 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		argl;
	int		i;
	char	*cat;
	int		curr;

	curr = 0;
	i = 0;
	argl = 0;
	while (++i < argc)
		argl += sizeof(argv[i]) + 2;
	cat = (char*)malloc(argl * sizeof(char));
	i = 0;
	while (++i < argc)
	{
		ft_strcat(cat, argv[i]);
		curr += ft_strlen(argv[i]);
		cat[curr] = '\n';
		cat[curr + 1] = '\0';
		curr += 1;
	}
	cat[curr - 1] = '\0';
	return (cat);
}

int main(int a, char **b) {
printf ("%s", ft_concat_params(a,b));
}
