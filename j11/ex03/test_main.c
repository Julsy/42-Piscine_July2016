/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 13:13:41 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 14:36:52 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

int		main(void)
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
	printf("%d\n", ft_list_size(list));
	return (0);
}
