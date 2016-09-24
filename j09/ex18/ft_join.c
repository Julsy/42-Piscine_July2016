/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 17:13:54 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/29 17:20:29 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	*ft_join(char **tab, char *sep)
{
	char *str;
	int i;
	int size;
	int sepa;
	int j;

	j = 0;
	i = 0;
	while (tab[i])
	{
	size += ft_strlen(tab[i++]);
	sepa = ft_strlen(sep);
	str = (char *)(malloc(sizeof(char) * (size + (i - 1) *sepa)) + 1);
	i = 0;
	while (tab[i] && str)
	{
		size = 0;
		while (tab[i][size])
			str[j++] = tab[i][size++];
		sepa = 0;
		whhile (sep[sepa] && tab[i + 1])
		str[j++] = sep[sepa++];
		i++;
	}
	str[j] = '\0';
	return (str);
}
