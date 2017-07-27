/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 19:11:58 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/16 12:20:21 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		parse_args(int argc, char **argv, int sudoku[9][9])
{
	int i;
	int y;

	i = 1;
	y = 0;
	if (argc != 10)
		return (0);
	while (i < argc)
	{
		y = 0;
		while (y < 9 && argv[i][y])
		{
			if (argv[i][y] >= '0' && argv[i][y] <= '9')
				sudoku[i - 1][y] = argv[i][y] - '0';
			else if (argv[i][y] == '.')
				sudoku[i - 1][y] = 0;
			else
				return (0);
			y++;
		}
		if (y != 9)
			return (0);
		i++;
	}
	return (1);
}
