/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 03:22:39 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 03:25:52 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "stack.h"

int		result(t_stack **op_stack, t_stack **val_stack);
void	handle_operator(t_stack **op_sck, t_stack **val_sck, char *str, int i);
void	handle_end_parenthesis(t_stack **op_stck, t_stack **val_stck, int i);

#endif
