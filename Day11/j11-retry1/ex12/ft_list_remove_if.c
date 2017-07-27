/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 05:34:02 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 22:23:12 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *curr;

	curr = *(begin_list);
	prev = 0;
	while (curr != 0)
	{
		if (cmp(curr->data, data_ref) == 0 && prev == 0)
		{
			curr = curr->next;
			*begin_list = curr;
		}
		else if (cmp(curr->data, data_ref) == 0)
		{
			prev->next = curr->next;
			prev = curr;
			curr = curr->next;
			free(curr);
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
