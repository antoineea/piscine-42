/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:34:31 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 05:32:05 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "stack.h"
#include "operations.h"
#include "ft_nbrs.h"
#include "ft_char.h"

int		is_operator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int		operator_priority(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (4);
	return (3);
}

int		apply_operation(int operand2, int operator, int operand1)
{
	if (operator == '+')
		return (operand1 + operand2);
	if (operator == '-')
		return (operand1 - operand2);
	if (operator == '*')
		return (operand1 * operand2);
	if (operator == '/')
		return (operand1 / operand2);
	if (operator == '%')
		return (operand1 % operand2);
	return (-1);
}

int		eval_expr(char *str)
{
	t_stack		*value_stack;
	t_stack		*operator_stack;
	int			i;
	int			tmp;

	value_stack = create_stack();
	operator_stack = create_stack();
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == ' ' || (str[i] == '(' && push(operator_stack, '(')))
			i++;
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '-' &&
		str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			tmp = ft_atoi(str + i);
			i += nb_digits(tmp);
			push(value_stack, tmp);
		}
		else if (is_operator(str[i]))
			handle_operator(&operator_stack, &value_stack, str, i++);
		else if (str[i] == ')')
			handle_end_parenthesis(&operator_stack, &value_stack, i++);
	}
	return (result(&operator_stack, &value_stack));
}
