/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 03:56:47 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 00:52:24 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	tmp = 0;
	if (!begin_list)
		return ;
	while ((*begin_list))
	{
		tmp = (*begin_list);
		free(tmp);
		(*begin_list) = (*begin_list)->next;
	}
}
