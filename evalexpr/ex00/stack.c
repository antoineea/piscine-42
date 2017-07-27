/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:21:01 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 03:26:13 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "ft_nbrs.h"
#include <stdlib.h>

t_stack		*create_stack(void)
{
	t_stack *s;

	s = (t_stack*)malloc(sizeof(t_stack));
	s->stack_count = 0;
	return (s);
}

void		dispose_stack(t_stack **stack)
{
	free(*stack);
	*stack = 0;
}

int			push(t_stack *s, int data)
{
	if (!s)
		return (-1);
	s->stack_count++;
	s->stack[s->stack_count] = data;
	return (data);
}

int			pop(t_stack *s)
{
	if (!s || s->stack_count == 0)
		return (-1);
	return (s->stack[s->stack_count--]);
}

int			peek(t_stack *s)
{
	if (!s || s->stack_count == 0)
		return (-1);
	return (s->stack[s->stack_count]);
}
