/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:50:35 by cfredric          #+#    #+#             */
/*   Updated: 2016/07/31 15:15:17 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	helper_x(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
	ft_putchar('\n');
}

void	helper_y(int x, int y)
{
	int i;
	int width;

	i = 2;
	while (i < y)
	{
		width = 1;
		while (width <= x)
		{
			if (width == 1 || width == x)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			width++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		helper_x(x);
		if (y == 2)
		{
			helper_x(x);
			return ;
		}
		helper_y(x, y);
		if (y > 1)
		{
			helper_x(x);
		}
	}
}
