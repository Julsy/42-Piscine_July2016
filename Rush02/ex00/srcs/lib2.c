/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 05:54:57 by sbran             #+#    #+#             */
/*   Updated: 2016/07/31 18:52:30 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strcat_m(char *dest, char *src)
{
	int		i;
	int		j;
	char	*res;

	i = -1;
	j = 0;
	res = (char *)malloc(sizeof(char) * ft_strlen(dest) + ft_strlen(src) + 1);
	while (dest[++i] != '\0')
		res[i] = dest[i];
	while (src[j] != '\0')
	{
		res[i] = src[j];
		j++;
		i++;
	}
	res[i] = '\0';
	free(dest);
	return (res);
}
