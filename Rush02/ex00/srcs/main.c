/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/16 16:10:13 by sbran             #+#    #+#             */
/*   Updated: 2016/07/31 19:13:35 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_check_size(t_data *data)
{
	int		i;

	i = 0;
	while (data->str[i] != '\0')
	{
		if (data->str[i] == '\n' && data->str[i + 1] != '\0')
			data->y = data->y + 1;
		i++;
	}
}

void	ft_put_rush(t_data *data, int nb_arg)
{
	int		i;
	int		count;

	i = 0;
	count = 1;
	while (i < nb_arg)
	{
		if (data->rush[0] && count++)
			ft_putstr_s("[rush-00] [", data, 0);
		else if (data->rush[1] && count++)
			ft_putstr_s("[rush-01] [", data, 1);
		else if (data->rush[2] && count++)
			ft_putstr_s("[rush-02] [", data, 2);
		else if (data->rush[3] && count++)
			ft_putstr_s("[rush-03] [", data, 3);
		else if (data->rush[4] && count++)
			ft_putstr_s("[rush-04] [", data, 4);
		if (count <= nb_arg)
			ft_putstr(" || ");
		i++;
	}
}

int		ft_check_pattern(t_data *data)
{
	int		check_c;

	check_c = 1;
	if (data->str[0] == '\0')
		return (-1);
	rush00(data);
	if (!ft_strcmp(data->str, data->tmp) && check_c++)
		data->rush[0] = 1;
	rush01(data);
	if (!ft_strcmp(data->str, data->tmp) && check_c++)
		data->rush[1] = 1;
	rush02(data);
	if (!ft_strcmp(data->str, data->tmp) && check_c++)
		data->rush[2] = 1;
	rush03(data);
	if (!ft_strcmp(data->str, data->tmp) && check_c++)
		data->rush[3] = 1;
	rush04(data);
	if (!ft_strcmp(data->str, data->tmp) && check_c++)
		data->rush[4] = 1;
	return (check_c);
}

void	ft_init(t_data *data)
{
	int		i;
	int		ret;

	data->rush = (int *)malloc(sizeof(int) * 5);
	i = 0;
	while (i < 5)
		data->rush[i++] = 0;
	data->buf = (char *)malloc(sizeof(char) * SIZE + 1);
	data->str = (char *)malloc(sizeof(char) * SIZE + 1);
	i = 0;
	while ((ret = read(0, data->buf, SIZE)))
	{
		data->buf[ret] = '\0';
		data->str = ft_strcat_m(data->str, data->buf);
		i++;
	}
	data->tmp = (char *)malloc(sizeof(char) * ft_strlen(data->str) + 1);
	data->y = 1;
	ft_check_size(data);
	data->x = ft_strlen(data->str) / data->y;
}

int		main(void)
{
	t_data	data;
	int		count;

	ft_init(&data);
	if (ft_check_pattern(&data) <= 1)
	{
		ft_putstr("naw brah\n");
		return (0);
	}
	count = ft_count_arg(&data);
	ft_put_rush(&data, count);
	free(data.buf);
	free(data.tmp);
	free(data.str);
	if (data.x == data.y)
		ft_putstr_s(" || [square] [", &data, 1);
	ft_putstr_s(" || [rectangle] [", &data, 1);
	ft_putchar('\n');
	return (0);
}
