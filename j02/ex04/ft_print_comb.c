/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 09:41:06 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/18 11:31:51 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	multiple_putchar(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	char indx;
	char indy;
	char indz;

	indx = '0';
	while (indx <= '7')
	{
		indy = indx + 1;
		while (indy <= '8')
		{
			indz = indy + 1;
			while (indz <= '9')
			{
				multiple_putchar(indx, indy, indz);
				if (indx != '7' || indy != '8' || indz != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				indx++;
			}
			indy++;
		}
		indz++;
	}
}
