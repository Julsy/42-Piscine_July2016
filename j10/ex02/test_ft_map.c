/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:24:44 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/25 21:03:09 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		new_tab[i] = f(tab[i]);  /* initialized new var - new_tab, to put there the result of f pointer to function */
		i++;
	}
	return (new_tab);
}

int		add_one(int x)  /* which is f - pointer to function to use in ft_map */
{
	return (x + 1);
}

int		main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *res;

	ft_foreach(arr, 10, &ft_putnbr);  /* prints with putchar values of arr */
	res = ft_map(arr, 10, &add_one);  /* creates new array of ints - res from array arr, where each element increases by 1 */
	ft_putchar('\n');  
	ft_foreach(res, 10, &ft_putnbr);  /* prints res - 10 arrays of ints */
	return (0);
}


