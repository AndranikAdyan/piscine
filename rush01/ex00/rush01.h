/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:38:44 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/15 21:38:52 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

struct s_walls
{
	int	**matrix;
	int	*colup;
	int	*coldown;
	int	*rowleft;
	int	*rowright;
};

int		row_left(int **mat, int *rowleft, int row, int n);
int		row_right(int **mat, int *rowright, int row, int n);
int		col_down(int **mat, int *coldown, int col, int n);
int		col_up(int **mat, int *colup, int col, int n);
void	fill_nums(struct s_walls *walls, char **argv, int n);
int		**allocate_matrix(int n);
void	print_matrix(int **matrix, int n);
void	free_matrix(int **matrix, int n);
void	malloc_walls(struct s_walls *walls, int n);
void	free_walls(struct s_walls *walls);
int		check_num(int **mat, int i, int j, int num);
void	malloc_walls(struct s_walls *walls, int n);
void	free_walls(struct s_walls *walls);
void	fill_nums(struct s_walls *walls, char **argv, int n);
int		solve(struct s_walls *walls, int row, int col, int n);
int		valid(char *arg, int n);
int		nums_count(char *arg);

#endif
