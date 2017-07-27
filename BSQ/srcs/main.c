/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 16:07:11 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 23:16:58 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
	{
		if (!parse_map(1, 0))
			write(1, "map error\n", 10);
	}
	else
	{
		while (i < argc - 1)
		{
			if (!parse_map(0, argv[++i]))
				write(1, "map error\n", 10);
			if (i != argc - 1)
				write(1, "\n", 1);
		}
	}
	return (0);
}
