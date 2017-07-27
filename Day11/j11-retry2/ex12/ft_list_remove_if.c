/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 05:34:02 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/25 00:22:20 by msteffen         ###   ########.fr       */
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




t_list	*ft_create_elem(void *data)
{
	t_list *l;

	l = (t_list*)malloc(sizeof(t_list));
	l->next = NULL;
	l->data = data;
	return (l);
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
int compare(void *a, void *b)
{
	int ta = *((int*) a);
	int tb = *((int*) b);
	return (!(a==b));
}

int main()
{
	t_list *l = 0;

	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5;


	ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_push_back(&l, &c);
	ft_list_push_back(&l, &d);
	ft_list_push_back(&l, &e);
	ft_list_push_back(&l, &f);ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_push_back(&l, &c);
	ft_list_push_back(&l, &d);ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_push_back(&l, &c);
	ft_list_push_back(&l, &d);
	ft_list_push_back(&l, &e);
	ft_list_push_back(&l, &f);ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_push_back(&l, &c);
	ft_list_push_back(&l, &d);
	ft_list_push_back(&l, &e);
	ft_list_push_back(&l, &f);ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_push_back(&l, &c);
	ft_list_push_back(&l, &d);
	ft_list_push_back(&l, &e);
	ft_list_push_back(&l, &f);
	ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);


	ft_list_push_back(&l, &f);
	ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_push_back(&l, &f);
	ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_push_back(&l, &f);
	ft_list_push_back(&l, &a);
	ft_list_push_back(&l, &b);
	ft_list_remove_if(&l, &f, &compare);

}
