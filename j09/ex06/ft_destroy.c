/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 10:42:52 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 11:21:56 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (factory[a])
	{
		while (factory[a][b])
		{
			free(factory[a][b]);
			b++;
		}
		free(factory[a]);
		a++;
	}
	free(factory);
}
