/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:45:31 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 21:52:02 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

int		inc_array(char **str, int size)
{
	char *tmp;

	tmp = 0;
	size += 256;
	tmp = (char *)malloc(size * sizeof(char));
	ft_strcpy(tmp, *str);
	free(*str);
	*str = (char *)malloc(size * sizeof(char));
	ft_strcpy(*str, tmp);
	return (size);
}
