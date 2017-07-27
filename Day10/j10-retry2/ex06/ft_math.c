/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 17:22:38 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/19 18:14:30 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

int		plus(int a, int b)
{
	return (a + b);
}

int		minus(int a, int b)
{
	return (a - b);
}

int		multiply(int a, int b)
{
	return (a * b);
}

int		divide(int a, int b)
{
	if (b == 0)
	{
		error("Stop : division by zero\n");
		return (-1);
	}
	return (a / b);
}

int		modulo(int a, int b)
{
	if (b == 0)
	{
		error("Stop : modulo by zero\n");
		return (-1);
	}
	return (a % b);
}
