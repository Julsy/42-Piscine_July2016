/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 10:52:44 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/27 13:12:45 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_any(char **tab, int (*f)(char*));

int		look_for(char *str)
{
	return (ft_strcmp(str, "test") == 0);
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(ft_any(argv, &look_for));
}
