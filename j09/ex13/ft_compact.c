/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 17:03:22 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 17:07:14 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int len)
{
	int i;
	int x;
	int len;

	i = 0;
	while (i < len)
	{
		i = 0;
		x = 0;
		len = 0;
		while (tab[0][i] && i < len)
		{
			i += 1;
			len += 1;
		}
		while (tab[0][i] == 0 && i++ < len)
			x += 1;
		if (i < len)
		{
			tab[0][i - x] = tab[0][i];
			tab[0][i] = 0;
		}
	}
	return (len);
}
