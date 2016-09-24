/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 10:34:05 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 15:21:04 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);
void		ft_list_push_front(t_list **begin_list, void *data);

t_list		*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

int			main(void)
{
	t_list	*list;
	char	*start;

	start = "list 0";
	list = ft_create_elem(start);
	ft_list_push_front(&list, "list 1");
	ft_list_push_front(&list, "list 2");
	ft_list_push_front(&list, "list 3");
	ft_list_push_front(&list, "list 4");
	ft_list_push_front(&list, "list 5");
	ft_list_push_front(&list, "list 6");
	printf("%s\n", ft_list_last(list)->data);
	return (0);
}
