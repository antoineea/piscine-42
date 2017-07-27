/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:17:02 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 02:25:10 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef	struct	s_stack
{
	int		stack[5000];
	int		stack_count;
}				t_stack;

t_stack			*create_stack(void);
int				push(t_stack *s, int data);
int				pop(t_stack *s);
int				peek(t_stack *s);
void			dispose_stack(t_stack **stack);

#endif
