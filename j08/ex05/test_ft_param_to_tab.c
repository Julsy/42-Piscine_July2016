/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_param_to_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 21:17:10 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/23 21:23:21 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char					**ft_split_whitespaces(char *str);

char					*ft_strdup(char *src)
{
	int		i;
	int		src_size;
	char	*new_str;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	new_str = (char*)malloc(sizeof(*new_str) * (src_size));
	if (new_str == NULL)
		return (NULL);
	while (i < src_size)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[src_size] = '\0';
	return (new_str);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*a;
	int			i;
	int			j;

	i = 0;
	a = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		a[i].size_param = j;
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		a[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	a[i].str = 0;
	return (a);
}

int						main(void)
{
	int i;
	int j;
	t_stock_par *par;

	i = 0;
	par = ft_param_to_tab(argc, argv);
	while (par[i].str)
	{
		j = -1;
		while (par[i].tab[j++])
			printf("%s\n", par[i].tab[j]);
		i++;
	}
	return (0);
}
