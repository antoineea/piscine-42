/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 03:56:47 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 22:35:24 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*create_link(t_list *list, void *data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->next = list;
		tmp->data = data;
	}
	return (tmp);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*lst;
	int		i;

	i = 2;
	if (ac == 1)
		return (0);
	lst = ft_create_elem(av[1]);
	while (i < ac)
	{
		lst = create_link(lst, av[i]);
		i++;
	}
	return (lst);
}
