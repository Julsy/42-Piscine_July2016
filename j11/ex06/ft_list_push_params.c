/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 10:34:05 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 21:26:26 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);
t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		i;

	if (ac < 2)
		return (NULL);
	i = 1;
	list = NULL;
	while (av[i])
	{
		if (!list)
			list = ft_create_elem(av[i]);
		else
		{
			tmp = ft_create_elem(av[i]);
			tmp->next = list;
			list = tmp;
		}
		i++;
	}
	return (list);
}
