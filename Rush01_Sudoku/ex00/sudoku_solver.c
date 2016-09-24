/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrumm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 16:56:16 by kdrumm            #+#    #+#             */
/*   Updated: 2016/07/24 16:56:17 by kdrumm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "sudoku_info.h"

struct s_point		*find_next(struct s_point *p)
{
	if (p->column + 1 < 9)
	{
		p->column++;
	}
	else if (p->row + 1 < 9)
	{
		p->column = 0;
		p->row++;
	}
	else
	{
		p->row = 9;
		p->column = 9;
	}
	return (p);
}

struct s_point		*find_previous(struct s_point *p)
{
	if (p->column - 1 >= 0)
	{
		p->column--;
	}
	else if (p->row - 1 >= 0)
	{
		p->column = 8;
		p->row--;
	}
	else
	{
		p->column = 9;
		p->row = 9;
	}
	return (p);
}

int					try(int **board, int row, int column, int attempt)
{
	int box_row;
	int box_column;
	int i;

	box_row = (row / 3) * 3;
	box_column = (column / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (ABS(board[row][i]) == attempt)
			return (0);
		if (ABS(board[i][column]) == attempt)
			return (0);
		if (ABS(board[box_row + (i / 3)][box_column + (i % 3)]) == attempt)
			return (0);
		i++;
	}
	return (1);
}

int					solve_helper(int **board, struct s_point *sq)
{
	int attempt;

	attempt = ABS(board[sq->row][sq->column]) + 1;
	while (attempt < 10)
	{
		if (try(board, sq->row, sq->column, attempt))
		{
			board[sq->row][sq->column] = 0 - attempt;
			sq = find_next(sq);
			if (sq->row == 9 && sq->column == 9)
				return (1);
			else
				return (solve_puzzle(board, sq));
		}
		attempt++;
	}
	board[sq->row][sq->column] = 0;
	sq = find_previous(sq);
	while (board[sq->row][sq->column] > 0)
		sq = find_previous(sq);
	return (solve_puzzle(board, sq));
}

int					solve_puzzle(int **board, struct s_point *sq)
{
	if (sq->row < 9 && sq->column < 9)
	{
		if (board[sq->row][sq->column] > 0)
		{
			sq = find_next(sq);
			if (sq->row == 9 && sq->column == 9)
				return (1);
			else
				return (solve_puzzle(board, sq));
		}
		else if (board[sq->row][sq->column] <= 0)
		{
			solve_helper(board, sq);
		}
	}
	return (1);
}
