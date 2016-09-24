/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 10:48:56 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/26 10:56:51 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		compare(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int tab[5] = {1, 2, 35, 12, 35};
	ft_putnbr(ft_is_sort(tab, 5, &compare));
}
