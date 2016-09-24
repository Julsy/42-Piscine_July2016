/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:44:48 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 10:45:26 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_take_place(int hour)
{
	int h;

	h = hour;
	if (hour > 12)
		h = hour % 12;
	if (hour == 0)
		h = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, ((h + 1) % 12));
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, ((h + 1) % 12));
}

int		main(void)
{
	ft_take_place(00);
	return (0);
}
