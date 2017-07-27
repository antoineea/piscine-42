/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_map.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 20:46:31 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/26 20:46:54 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MAP_H
# define T_MAP_H

typedef struct	s_map {
	int		height;
	int		width;
	char	empty;
	char	obstacle;
	char	full;
	int		**map;

}				t_map;

#endif
