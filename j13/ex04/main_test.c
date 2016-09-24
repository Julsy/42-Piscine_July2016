/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 12:36:04 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/29 12:55:17 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree*)malloc(sizeof(t_btree));
	if (node)
	{
		node->left = 0;
		node->right = 0;
		node->item = item;
	}
	return (node);
}

void	btree_insert_data(t_btree **root,
	void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
		btree_create_node(item);
	else if ((*cmpf)(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

int		ft_strcmp(void *v1, void *v2)
{
	char *s1;
	char *s2;

	s1 = (char *)v1;
	s2 = (char *)v2;
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(void *v)
{
	char *str;

	str = (char *)v;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
	{
		(*applyf)(root->item);
		if (root->left)
			btree_apply_prefix(root->left, applyf);
		if (root->right)
			btree_apply_prefix(root->right, applyf);
	}
}

int		main(void)
{
	t_btree *root;

	root = NULL;
	btree_insert_data(&root, "5", &ft_strcmp);
	btree_insert_data(&root, "3", &ft_strcmp);
	btree_insert_data(&root, "8", &ft_strcmp);
	btree_insert_data(&root, "4", &ft_strcmp);
	btree_insert_data(&root, "1", &ft_strcmp);
	btree_insert_data(&root, "9", &ft_strcmp);
	btree_insert_data(&root, "0", &ft_strcmp);
	btree_insert_data(&root, "7", &ft_strcmp);
	btree_insert_data(&root, "6", &ft_strcmp);
	btree_insert_data(&root, "2", &ft_strcmp);
	btree_insert_data(&root, "4", &ft_strcmp);
	btree_insert_data(&root, "7", &ft_strcmp);
	ft_putstr("<");
	btree_apply_prefix(root, &ft_putstr);
	ft_putstr("\n>531024487679\n");
	return (0);
}
