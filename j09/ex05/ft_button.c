/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 10:42:52 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/22 11:20:21 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
		return (i);
	if ((j >= i && j <= k) || (j <= i && j >= k))
		return (j);
	if ((k >= j && k <= i) || (k <= j && k >= i))
		return (k);
}