/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:46:04 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 10:32:50 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int		main(void)
{
	t_list	*elem;
	int		i;

	i = 42;
	elem = ft_create_elem(&i);
	if (elem->next != (void*)0)
		return (printf("fail\n") || 1);
	if (elem->data != &i)
		return (printf("fail\n") || 1);
	return (printf("it works!\n") && 0);
}
