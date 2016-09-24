/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 17:42:30 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 21:42:14 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

void	ft_print_list_str(t_list *begin_list)
{
	t_list *cpy;

	cpy = begin_list;
	printf("[| ");
	while (cpy)
	{
		printf("%s", (char *)cpy->data);
		cpy = cpy->next;
		if (cpy)
			printf(" ; ");
	}
	printf(" |]\n");
}

int		main(int ac, char **av)
{
	ft_print_list_str(ft_list_push_params(ac, av));
	t_list list;
	list = *ft_list_at(ft_list_push_params(ac, av), 4);
	ft_print_list_str(&list);
	return (0);
}
