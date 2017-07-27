/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 05:12:40 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/14 15:23:42 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define OPEN 1
# define CLOSE 0

enum	e_j	{FALSE, TRUE};
typedef e_j	t_bool;

typedef struct	s_door
{
	char		state;
}				t_door;

#endif
