/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 13:57:26 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/19 15:23:08 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*begin;
	int		a;
	int		b;

	a = 0;
	b = 0;
	begin = 0;
	while (str[a] != '\0' && to_find[b] != '\0')
	{
		if (str[a] == to_find[b])
		{
			if (begin == 0)
				begin = &str[a];
			b++;
		}
		else
		{
			b = 0;
			begin = 0;
		}
		a++;
	}
	return (to_find[b] == '\0' ? begin : 0);
}
