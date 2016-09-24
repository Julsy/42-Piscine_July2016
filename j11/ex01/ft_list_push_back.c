/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:21:39 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/26 21:00:12 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	list = *begin_list;
	if (!list)
		list = ft_create_elem(data);
	else
	{
		while (list->next)
		{
			list = list->next;
		}
		list->next = ft_create_elem(data);
	}
}
