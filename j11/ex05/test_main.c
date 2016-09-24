/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 15:23:52 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 15:27:49 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);

void	print_list(t_list *list)
{
	if (list)
	{
		printf("%s\n", (char *)list->data);
		print_list(list->next);
	}
}

int		main(int argc, char **argv)
{
	t_list	*list;

	list = ft_list_push_params(argc, argv);
	print_list(list);
	return (0);
}
