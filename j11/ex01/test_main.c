/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 10:34:04 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 23:26:06 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

void	print_list(t_list *list)
{
	if (list)
	{
		printf("%s\n", (char *)list->data);
		print_list(list->next);
	}
}

int		main(void)
{
	t_list	*list;
	char	*start;

	start = "list 0";
	list = ft_create_elem(start);
	ft_list_push_back(&list, "list 1");
	ft_list_push_back(&list, "list 2");
	ft_list_push_back(&list, "list 3");
	ft_list_push_back(&list, "list 4");
	ft_list_push_back(&list, "list 5");
	ft_list_push_back(&list, "list 6");
	print_list(list);
	return (0);
}
