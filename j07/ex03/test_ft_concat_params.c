/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_concat_params.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 13:11:09 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 13:23:42 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

int array_len(int argc, char **argv)
{
	int		j;
	int		count;
	int		len;

	len = 0;
	count = 1;
	while (count < argc)
	{
		j = 0;
		while (argv[count][j]!='\0')
		{
			j++;
			len++;
		}
		len++;
		count++;
	}
	return(len);
}

char *ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		count;
	int len;


	len = array_len(argc, argv);
	str = (char*)malloc(sizeof(*str) * len+1);

	if (str)
	{
		count=1;
		while (count < argc)
		{
			ft_strcat(str, argv[count]);
			count++;
		}
		return (str);
	}
	else
		return (NULL);
}

int main(int argc, char **argv)
{
	char *res;
	int i;

	i=0;

	res = ft_concat_params(argc, argv);

	while(res[i])
	{
		ft_putchar(res[i]);
		i++;
	}
	return(0);
}
