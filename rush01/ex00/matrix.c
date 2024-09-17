/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:42:18 by rkerobya          #+#    #+#             */
/*   Updated: 2024/09/15 19:42:28 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	**allocate_matrix(int n)
{
	int	**matrix;
	int	i;

	matrix = (int **)malloc(n * sizeof(int *));
	i = 0;
	while (i < n)
	{
		matrix[i] = (int *)malloc(n * sizeof(int));
		i++;
	}
	return (matrix);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(int **matrix, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(matrix[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	free_matrix(int **matrix, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
