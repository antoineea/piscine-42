/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 19:45:16 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/16 15:40:42 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include "parse.h"
#include "ft_str.h"
#include "valid.h"
#include "static_tab.h"

int		main(int argc, char **argv)
{
	int	tab[9][9];

	fill_tab(tab);
	if (!parse_args(argc, argv, tab))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!check_input(tab))
	{
		ft_putstr("Error\n");
		return (0);
	}
	solve(tab);
	print_tab(tab);
	return (0);
}
