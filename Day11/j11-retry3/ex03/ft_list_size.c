/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 03:03:24 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 00:22:00 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size + 1);
}
