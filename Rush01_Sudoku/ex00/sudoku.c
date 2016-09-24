/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrumm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:13:10 by kdrumm            #+#    #+#             */
/*   Updated: 2016/07/24 15:13:11 by kdrumm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_info.h"

int					**fillboard(int **board, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] < 49 || argv[i + 1][j] > 57)
				board[i][j] = 0;
			else
			{
				board[i][j] = argv[i + 1][j] - 48;
			}
			j++;
		}
		i++;
	}
	return (board);
}

void				printboard(int **board)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(ABS(board[i][j]) + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

struct s_point		*point_create(void)
{
	struct s_point *point;

	point = (struct s_point *)malloc(sizeof(struct s_point));
	point->row = 0;
	point->column = 0;
	return (point);
}

int					play(int **board, char **argv)
{
	struct s_point	*point;

	board = fillboard(board, argv);
	point = point_create();
	solve_puzzle(board, point);
	printboard(board);
	free(board);
	return (1);
}

int					main(int argc, char **argv)
{
	int				**board;
	int				i;

	i = 0;
	board = (int **)malloc(sizeof(int *) * 10);
	while (i < 9)
	{
		board[i] = (int *)malloc(sizeof(int) * 10);
		i++;
	}
	if (!board)
		error(board);
	else if (!check_args(argv))
		error(board);
	else
	{
		play(board, argv);
		return (1);
	}
	return (argc);
}
