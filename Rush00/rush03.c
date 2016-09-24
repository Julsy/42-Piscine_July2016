/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:51:45 by cfredric          #+#    #+#             */
/*   Updated: 2016/07/31 15:15:54 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	top_x(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	bottom_x(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
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
				ft_putchar('B');
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
		top_x(x);
		if (y == 2)
		{
			bottom_x(x);
			return ;
		}
		helper_y(x, y);
		if (y > 1)
		{
			bottom_x(x);
		}
	}
}
