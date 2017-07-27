/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 04:45:25 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 17:04:03 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*btree;

	if (0 == (btree = (t_btree*)malloc(sizeof(t_btree))))
		return (0);
	btree->item = item;
	btree->left = 0;
	btree->right = 0;
	return (btree);
}
