/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 05:10:48 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/14 05:25:31 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"
#include <unistd.h>

void		ft_putstr(char *str)
{
	int		i;
	char	c;

	i = -1;
	c = '\n';
	while (str[++i])
		write(1, &str[i], 1);
	write(1, &c, 1);
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
}

void		open_door(t_door *door)
{
	ft_putstr("Door opening...");
	door->state = OPEN;
}

t_bool		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state == OPEN);
}

t_bool		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	return (door->state == CLOSE);
}
