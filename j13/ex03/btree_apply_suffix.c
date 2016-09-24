/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 12:11:29 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/29 12:28:22 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
	{
		if (root->left)
			btree_apply_suffix(root->left, applyf);
		if (root->right)
			btree_apply_suffix(root->right, applyf);
		(*applyf)(root->item);
	}
}
