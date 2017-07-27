/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 18:01:18 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/12 18:20:51 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int y;
	unsigned int ret;
	unsigned int sz;

	i = 0;
	y = 0;
	ret = 0;
	sz = 0;
	sz = ft_strlen(dest);
	ret = ft_strlen(dest) + ft_strlen(src);
	while (dest[i])
		i++;
	while (y < size - i && src[y])
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[y] = '\0';
	if (size < sz)
		ret -= (sz - (size));
	return (ret);
}
