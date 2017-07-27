/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 05:34:02 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 03:08:43 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *lst;
	t_list *el;

	lst = *(begin_list);
	if (!lst)
		*begin_list = ft_create_elem(data);
	else
	{
		el = ft_create_elem(data);
		el->next = lst;
		*begin_list = el;
	}
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *lst;

	lst = *(begin_list);
	if (!lst)
		*begin_list = ft_create_elem(data);
	else
	{
		while (lst->next)
			lst = lst->next;
		lst->next = ft_create_elem(data);
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *lst;
	t_list *tmp;

	lst = *(begin_list);
	if (lst == 0 || cmp(data, lst->data) <= 0)
	{
		ft_list_push_front(begin_list, data);
		return ;
	}
	while (lst->next)
	{
		if (cmp(lst->data, data) <= 0 && cmp(data, lst->next->data) <= 0)
		{
			tmp = lst->next;
			lst->next = ft_create_elem(data);
			lst->next->next = tmp;
			return ;
		}
		lst = lst->next;
	}
	ft_list_push_back(begin_list, data);
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	if (begin_list2 == 0)
		return ;
	if (*begin_list1 == 0)
	{
		begin_list1 = &begin_list2;
		return ;
	}
	while (begin_list2)
	{
		ft_sorted_list_insert(begin_list1, begin_list2->data, cmp);
		begin_list2 = begin_list2->next;
	}
}
