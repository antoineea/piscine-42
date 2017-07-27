/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 03:56:47 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 00:31:40 by msteffen         ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*args;
	int		i;

	args = 0;
	i = 0;
	if (ac == 1)
		return (0);
	while (++i < ac)
		ft_list_push_front(&args, av[i]);
	return (args);
}
