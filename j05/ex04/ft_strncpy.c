/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 13:18:46 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/19 13:32:11 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (src[counter] != '\0' && (counter < n))
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (dest[counter])
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
