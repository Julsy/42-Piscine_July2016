/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:57:15 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/19 15:28:14 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int counter;

	counter = 0;
	if (s1[0] != '\0' || s2[0] != '0')
	{
		while (s1[counter] == s2[counter])
		{
			if (s1[counter] == '\0' && s2[counter] == '\0')
				return (0);
			counter++;
		}
		if (s1[counter] != s2[counter])
			return (int)(s1[counter] - s2[counter]);
	}
	return (0);
}
