/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 00:42:53 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/14 19:04:29 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)

void ft_print_numbers(void)
{
	char n;
	
	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
