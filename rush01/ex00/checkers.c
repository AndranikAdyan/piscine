/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:50:23 by rkerobya          #+#    #+#             */
/*   Updated: 2024/09/15 19:50:25 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	row_left(int **mat, int *rowleft, int row, int n)
{
	int	i;
	int	max;
	int	count;

	count = 1;
	i = 0;
	max = mat[row][0];
	while (i < n)
	{
		if (mat[row][i] > max)
		{
			max = mat[row][i];
			++count;
		}
		++i;
	}
	if (count == rowleft[row])
		return (1);
	return (0);
}

int	row_right(int **mat, int *rowright, int row, int n)
{
	int	i;
	int	max;
	int	count;

	count = 1;
	i = n - 1;
	max = mat[row][n - 1];
	while (i >= 0)
	{
		if (mat[row][i] > max)
		{
			max = mat[row][i];
			++count;
		}
		--i;
	}
	if (count == rowright[row])
		return (1);
	return (0);
}

int	col_down(int **mat, int *coldown, int col, int n)
{
	int	i;
	int	max;
	int	count;

	count = 1;
	i = n - 1;
	max = mat[n - 1][col];
	while (i >= 0)
	{
		if (mat[i][col] > max)
		{
			max = mat[i][col];
			++count;
		}
		--i;
	}
	if (count == coldown[col])
		return (1);
	return (0);
}

int	col_up(int **mat, int *colup, int col, int n)
{
	int	i;
	int	max;
	int	count;

	count = 1;
	i = 0;
	max = mat[0][col];
	while (i < n)
	{
		if (mat[i][col] > max)
		{
			max = mat[i][col];
			++count;
		}
		++i;
	}
	if (count == colup[col])
		return (1);
	return (0);
}

int	check_num(int **mat, int i, int j, int num)
{
	int	index;

	index = j - 1;
	while (index >= 0)
	{
		if (mat[i][index] == num)
			return (0);
		--index;
	}
	index = i - 1;
	while (index >= 0)
	{
		if (mat[index][j] == num)
			return (0);
		--index;
	}
	return (1);
}
