/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main_ft_strstr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:24:39 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/19 15:24:18 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char *longstring;
	char *shortstring;
	char *ptr;
	char *ptr2;

	longstring = "hey ho lets go";
	shortstring = "lets";
	ptr = ft_strstr(longstring, shortstring);
	ptr2 = ft_strstr(longstring, shortstring);
	printf("%s\n", ptr);
	printf("%s\n", ptr2);
	return (0);
}
