/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 10:48:57 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/26 10:54:00 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		compare(int a, int b)
{
	return (a - b);
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(ft_is_sort(argv, argc, &compare));
}
