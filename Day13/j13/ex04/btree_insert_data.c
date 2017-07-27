/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:48:52 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/24 23:06:29 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree *tree;

	tree = *(root);
	if (tree == 0)
		*root = btree_create_node(item);
	else if (cmpf(item, tree->item) <= 0 && tree->left == 0)
		tree->left = btree_create_node(item);
	else if (cmpf(item, tree->item) <= 0)
		btree_insert_data(&tree->left, item, cmpf);
	else if (cmpf(item, tree->item) >= 0 && tree->right == 0)
		tree->right = btree_create_node(item);
	else if (cmpf(item, tree->item) >= 0)
		btree_insert_data(&tree->right, item, cmpf);
}
