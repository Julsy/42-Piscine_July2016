/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:58:16 by iiliuk            #+#    #+#             */
/*   Updated: 2016/07/31 19:23:54 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# define SIZE 8192

typedef struct		s_data
{
	char			*buf;
	char			*str;
	char			*tmp;
	int				x;
	int				y;
	int				*rush;
}					t_data;

void				rush00(t_data *data);
void				rush01(t_data *data);
void				rush02(t_data *data);
void				rush03(t_data *data);
void				rush04(t_data *data);

/*
** LIB
*/
int					ft_strlen(char *str);
int					ft_strcmp(char *s1, char *s2);
void				ft_putstr_s(char *str, t_data *data, int c);
void				ft_putstr(char *str);
void				ft_putchar(char c);
char				*ft_strcat_m(char *dest, char *src);

/*
** MAIN
*/
void				ft_check_size(t_data *data);
void				ft_put_rush(t_data *data, int nb_arg);
int					ft_count_arg(t_data *data);
int					ft_check_pattern(t_data *data);
void				ft_init(t_data *data);

#endif
