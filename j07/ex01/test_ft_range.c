/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 09:39:48 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/21 09:40:00 by iiliuk           ###   ########.fr       */
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

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));

	if(!tab)
		return NULL;
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int main(void)
{
	int *numbers;
	int max;
	int min;
	int len;
	int i;

	min=540;
	max=800;
	len=max-min;
	i=0;

	numbers=ft_range(min,max);

	while(i<len)
	{
		ft_putnbr(*numbers);
		ft_putchar(' ');
		numbers++;
		i++;
	}
	return(0);
}
