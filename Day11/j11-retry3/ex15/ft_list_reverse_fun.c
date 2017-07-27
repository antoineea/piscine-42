/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 02:23:23 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/27 14:03:30 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_sizedup(t_list *begin_list)
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

t_list	*ft_list_atdup(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	if (!begin_list)
		return (0);
	while (begin_list)
	{
		if (i == nbr)
			return (begin_list);
		i++;
		begin_list = begin_list->next;
	}
	return (0);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		len;
	int		i;
	void	*tmp;
	t_list	*tmp_list1;
	t_list	*tmp_list2;

	len = ft_list_sizedup(begin_list);
	i = 0;
	if (len == 0 || len == 1)
		return ;
	while (i < len / 2)
	{
		tmp_list1 = ft_list_atdup(begin_list, i);
		tmp_list2 = ft_list_atdup(begin_list, len - i - 1);
		tmp = tmp_list1->data;
		tmp_list1->data = tmp_list2->data;
		tmp_list2->data = tmp;
		i++;
	}
}
