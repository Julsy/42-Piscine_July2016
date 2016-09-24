/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 10:42:52 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 16:39:58 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

ft_bool		open_door(t_door *door)
{
	ft_putstr("Door opening... \n");
	door->state = OPEN;
	return (TRUE);
}

ft_bool		close_door(t_door *door)
{
	ft_putstr("Door closing... \n");
	door->state = CLOSE;
	return (TRUE);
}

ft_bool		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN);
}

ft_bool		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state == CLOSE);
}
