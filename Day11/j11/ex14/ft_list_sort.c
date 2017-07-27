/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 04:20:34 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 01:13:07 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_elements(t_list *e1, t_list *e2)
{
	void *tmp;

	tmp = e1->data;
	e1->data = e2->data;
	e2->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *start;
	t_list *traverse;
	t_list *min;

	start = *(begin_list);
	if (start == 0)
		return ;
	while (start->next)
	{
		min = start;
		traverse = start->next;
		while (traverse)
		{
			if (cmp(min->data, traverse->data) >= 0)
				min = traverse;
			traverse = traverse->next;
		}
		ft_swap_elements(start, min);
		start = start->next;
	}
}
