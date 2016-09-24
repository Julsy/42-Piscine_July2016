/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 08:54:19 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/21 09:38:15 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	if(!str)
		return NULL;

	i = 0;
	while (i < len)
	{
		str[i] = src[i];  /*  assign char values from src to str, not addresses  */
		i++;
	}
	return (str);
}

int main(void)
{
	char *str;
	str = "TEST";

	ft_putstr("strdup result:");
	ft_putstr(strdup(c));
	ft_putstr("\n");
	ft_putstr("ft_strdup result:");
	ft_putstr(ft_strdup(c));
}
