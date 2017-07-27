/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_open.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 19:52:16 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 19:59:34 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_open.h"

int		ft_file_open(int fd, char *filename)
{
	int				file;

	if (fd == 1)
		file = 0;
	else
	{
		file = open(filename, O_RDONLY);
		if (file <= 0)
			return (-1);
	}
	return (file);
}
