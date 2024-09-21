/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:41:58 by rkerobya          #+#    #+#             */
/*   Updated: 2024/09/19 16:38:56 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_matrix(struct s_walls *walls, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (!row_left(walls->matrix, walls->rowleft, i, n))
			return (0);
		if (!row_right(walls->matrix, walls->rowright, i, n))
			return (0);
		if (!col_down(walls->matrix, walls->coldown, i, n))
			return (0);
		if (!col_up(walls->matrix, walls->colup, i, n))
			return (0);
		++i;
	}
	return (1);
}

int	solve(struct s_walls *walls, int row, int col, int n)
{
	int	num;

	num = 1;
	if (row == n)
		return (check_matrix(walls, n));
	if (col == n)
		return (solve(walls, row + 1, 0, n));
	while (num <= n)
	{
		if (check_num(walls->matrix, row, col, num))
		{
			walls->matrix[row][col] = num;
			if (solve(walls, row, col + 1, n))
				return (1);
			walls->matrix[row][col] = 0;
		}
		++num;
	}
	return (0);
}
