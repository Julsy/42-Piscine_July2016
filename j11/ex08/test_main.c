/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 17:47:27 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 22:43:29 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void		print_list(t_list *list)
{
	while (list)
	{
		printf("%s ", (char *)list->data);
		list = list->next;
	}
	printf("\n");
}

void		ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *current;
	t_list *tmp;

	prev = 0;
	current = *begin_list;
	while (current)
	{
		tmp = current->next;
		current->next = prev;
		prev = current;
		current = tmp;
	}
	*begin_list = prev;
}

int			main(void)
{
	char str_d[] = "d";
	char str_c[] = "c";
	char str_b[] = "b";
	char str_a[] = "a";

	t_list d = { 0, &str_d };
	t_list c = { &d, &str_c };
	t_list b = { &c, &str_b };
	t_list a = { &b, &str_a };

	t_list  *begin_list = &a;
	print_list(begin_list);
	ft_list_reverse(&begin_list);
	print_list(begin_list);
	return (0);
}
