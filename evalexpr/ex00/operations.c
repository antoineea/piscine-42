/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 03:22:30 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 03:31:04 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "stack.h"
#include "eval_expr.h"

int		result(t_stack **op_stack, t_stack **val_stack)
{
	t_stack		*operator_stack;
	t_stack		*value_stack;
	int			tmp;

	tmp = 0;
	operator_stack = *(op_stack);
	value_stack = *(val_stack);
	while (peek(operator_stack) != -1)
		push(value_stack, apply_operation(pop(value_stack),
		pop(operator_stack), pop(value_stack)));
	tmp = peek(value_stack);
	dispose_stack(&value_stack);
	dispose_stack(&operator_stack);
	return (tmp);
}

void	handle_operator(t_stack **op_sck, t_stack **val_sck, char *str, int i)
{
	t_stack *operator_stack;
	t_stack *value_stack;

	operator_stack = *(op_sck);
	value_stack = *(val_sck);
	while (peek(operator_stack) != '(' && peek(operator_stack) != -1
	&& operator_priority(peek(operator_stack)) >= operator_priority(str[i]))
		push(value_stack, apply_operation(pop(value_stack), pop(operator_stack),
		pop(value_stack)));
	if (peek(operator_stack) == '(' || peek(operator_stack) == -1
	|| operator_priority(peek(operator_stack)) < operator_priority(str[i]))
		push(operator_stack, str[i]);
}

void	handle_end_parenthesis(t_stack **op_stck, t_stack **val_stck, int i)
{
	t_stack *operator_stack;
	t_stack *value_stack;

	operator_stack = *(op_stck);
	value_stack = *(val_stck);
	(void)i;
	while (peek(operator_stack) != '(')
		push(value_stack, apply_operation(pop(value_stack), pop(operator_stack),
		pop(value_stack)));
	pop(operator_stack);
}
