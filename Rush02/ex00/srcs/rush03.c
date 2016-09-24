/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:58:53 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/31 19:16:22 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	check03(t_data *data, int *i, int *j, int *k)
{
	if ((*i == 1 && *j == 1) || (*i == data->y && *j == 1))
		data->tmp[*k] = 'A';
	else if ((*i == 1 && *j == data->x) || (*i == data->y && *j == data->x))
		data->tmp[*k] = 'C';
	else if ((*i == 1 && *j > 1 && *j < data->x) ||
			(*i == data->y && *j > 1 && *j < data->x) ||
			(*j == data->x && *i > 1 && *i < data->y) ||
			(*j == 1 && *i > 1 && *i < data->y))
		data->tmp[*k] = 'B';
	else
		data->tmp[*k] = ' ';
	(*k)++;
}

void	rush03(t_data *data)
{
	int		i;
	int		j;
	int		k;

	if (data->y < 1 || data->x < 1)
		return ;
	i = 0;
	k = 0;
	while (++i <= data->y)
	{
		j = 0;
		while (++j <= data->x)
			check03(data, &i, &j, &k);
		data->tmp[k] = '\n';
		k++;
	}
	data->tmp[k - 1] = '\0';
}
