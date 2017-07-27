/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 05:34:02 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/27 14:06:01 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_head(t_list **begin_list)
{
	t_list *lst;

	lst = *begin_list;
	*begin_list = (*begin_list)->next;
	free(lst);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *curr;

	if (begin_list == 0)
		return ;
	curr = *(begin_list);
	prev = 0;
	while (curr != 0)
	{
		if (cmp(curr->data, data_ref) == 0 && prev == 0)
			ft_list_remove_head(begin_list);
		else if (cmp(curr->data, data_ref) == 0 && curr->next == 0)
		{
			prev->next = 0;
			free(curr);
		}
		else if (cmp(curr->data, data_ref) == 0)
		{
			prev->next = curr->next;
			free(curr);
		}
		prev = curr;
		curr = curr->next;
	}
}
