/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:43:40 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/23 21:29:49 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str)
{
	int count;
	int i;
	int prev;

	i = 0;
	count = 0;
	prev = 0;
	while (str[i])
	{
		if ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t') && prev == 1)
			prev = 0;
		if ((str[i] != '\n' && str[i] != ' ' && str[i] != '\t') && prev == 0)
		{
			prev = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		word_location(int i, char *str)
{
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != ' ' && str[i] != '\t')
			break ;
		i++;
	}
	return (i);
}

int		length(int i, char *str)
{
	int init;

	init = i;
	while (str[i] != '\0' && str[i] != '\n' && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i - init);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	**chstr;

	i = 0;
	k = 0;
	chstr = (char**)malloc(sizeof(char*) * (word_count(str) + 1));
	while (i < word_count(str))
	{
		j = 0;
		k = word_location(k, str);
		size = length(k, str);
		chstr[i] = (char*)malloc(sizeof(char) * (size + 1));
		while (j < size)
			chstr[i][j++] = str[k++];
		chstr[i][j] = '\0';
		i++;
	}
	chstr[word_count(str)] = 0;
	return (chstr);
}
