/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_info.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrumm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:13:57 by kdrumm            #+#    #+#             */
/*   Updated: 2016/07/24 21:46:57 by kdrumm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_INFO_H
# define SUDOKU_INFO_H

# define WORKS 1
# define DOESNOTWORK 0
# include <unistd.h>
# include <stdlib.h>
# define ABS(x) (x > 0 ? x: -x)
# define SUCCESS 1
# define FAIL 0

struct			s_point
{
	int row;
	int column;
};

void			ft_putchar(char c);
void			ft_putstr(char *str);
struct s_point	*find_next(struct s_point *p);
struct s_point	*find_previous(struct s_point *p);
int				try(int **board, int row, int column, int attempt);
int				solve_helper(int **board, struct s_point *sq);
int				solve_puzzle(int **board, struct s_point *p);
int				**fillboard(int **board, char **argv);
void			printboard(int **board);
int				play(int **board, char **argv);
int				check_args(char **argv);
void			error();

#endif
