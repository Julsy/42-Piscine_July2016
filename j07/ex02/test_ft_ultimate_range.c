/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ultimate_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 10:04:24 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 13:08:45 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min));

	if(!tab)
	{
		*range = (void *)0;
		return (0);
	}

	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

int main(void)
{
	int *numbers;
	int max;
	int min;
	int len;
	int i;

	min=123;
	max=852;
	i=0;

	len = ft_ultimate_range(&numbers, min, max);

	while(i<len)
	{
		ft_putnbr(*numbers);
		ft_putchar(' ');
		numbers++;
		i++;
	}
	return(0);
}
