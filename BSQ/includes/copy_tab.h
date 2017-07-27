/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_tab.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:59:10 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/26 22:30:22 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_TAB_H
# define COPY_TAB_H

# include <stdlib.h>
# include "map.h"

char	**ft_copy_tab(t_map *map);
void	ft_free_copy_tab(char **tab, int height);

#endif
