/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 16:01:05 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 20:33:40 by maduhoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_MAP_H
# define PRINT_MAP_H

# include <unistd.h>
# include "bigger_square.h"
# include "copy_tab.h"

int		print_map(char **tab, t_bigger_square *square, int height, int width);

#endif
