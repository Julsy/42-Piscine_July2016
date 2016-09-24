/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 10:42:52 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 15:48:13 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_door.h"

int		main(void)
{
	t_door	door;

	open_door(&door);
	if (is_door_close(&door))
		open_door(&door);
	if (is_door_open(&door))
		close_door(&door);
	if (door.state == OPEN)
		close_door(&door);
	return (EXIT_SUCCESS);
}
