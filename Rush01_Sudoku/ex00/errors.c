/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrumm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:34:21 by kdrumm            #+#    #+#             */
/*   Updated: 2016/07/24 22:34:22 by kdrumm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_info.h"

int		check_args(char **argv)
{
	int i;
	int j;
	int valid;

	i = 1;
	while (argv[i])
	{
		j = 0;
		valid = 0;
		while (argv[j] != '\0')
		{
			if (argv[i][j] == '.' || (argv[i][j] <= '9' && argv[i][j] > '0'))
				valid++;
			j++;
		}
		if (valid != 9)
			return (0);
		i++;
	}
	if (i != 10)
		return (0);
	return (1);
}

void	error(void)
{
	ft_putstr("Error\n");
}
