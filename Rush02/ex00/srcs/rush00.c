/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:58:30 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/31 19:13:45 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	check00(t_data *data, int *i, int *j, int *k)
{
	if ((*i == 1 && *j == 1) || (*i == 1 && *j == data->x) ||
		(*i == data->y && *j == 1) || (*i == data->y && *j == data->x))
		data->tmp[*k] = 'o';
	else if ((*i == 1 && *j > 1 && *j < data->x) ||
			(*i == data->y && *j > 1 && *j < data->x))
		data->tmp[*k] = '-';
	else if ((*j == data->x && *i > 1 && *i < data->y) ||
			(*j == 1 && *i > 1 && *i < data->y))
		data->tmp[*k] = '|';
	else
		data->tmp[*k] = ' ';
	(*k)++;
}

void	rush00(t_data *data)
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
			check00(data, &i, &j, &k);
		data->tmp[k] = '\n';
		k++;
	}
	data->tmp[k - 1] = '\0';
}
