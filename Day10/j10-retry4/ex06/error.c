/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 17:54:49 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/19 18:13:41 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "ft_string.h"

void	error(char *str)
{
	write(1, str, ft_strlen(str));
}

int		noop(int a, int b)
{
	(void)a;
	(void)b;
	return (0);
}
