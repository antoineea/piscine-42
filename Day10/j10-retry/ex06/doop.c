/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 16:58:06 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/19 18:18:28 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "error.h"
#include "doop.h"
#include "ft_atoi.h"
#include "ft_string.h"

void	get_functions_array(int (*p[128]) (int x, int y))
{
	int i;

	i = 0;
	while (i < 127)
	{
		if (i == '+')
			p[i] = plus;
		else if (i == '-')
			p[i] = minus;
		else if (i == '*')
			p[i] = multiply;
		else if (i == '/')
			p[i] = divide;
		else if (i == '%')
			p[i] = modulo;
		else
			p[i] = noop;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int (*p[128]) (int x, int y);
	int result;

	result = 0;
	if (argc != 4)
		return (0);
	get_functions_array(p);
	result = p[(int)argv[2][0]](ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (result != -1)
	{
		ft_putnbr(result);
		ft_putchar('\n');
	}
	return (0);
}
