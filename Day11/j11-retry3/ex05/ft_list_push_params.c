/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 03:56:47 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/27 14:02:28 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front_dup(t_list **begin_list, void *data)
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*args;
	int		i;

	args = 0;
	i = -1;
	while (++i < ac)
		ft_list_push_front_dup(&args, av[i]);
	return (args);
}
