/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:40:09 by rkerobya          #+#    #+#             */
/*   Updated: 2024/09/15 19:40:15 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	malloc_walls(struct s_walls *walls, int n)
{
	walls->colup = malloc(n * sizeof(int));
	walls->coldown = malloc(n * sizeof(int));
	walls->rowleft = malloc(n * sizeof(int));
	walls->rowright = malloc(n * sizeof(int));
}

void	free_walls(struct s_walls *walls)
{
	free(walls->colup);
	walls->colup = 0;
	free(walls->coldown);
	walls->coldown = 0;
	free(walls->rowright);
	walls->rowright = 0;
	free(walls->rowleft);
	walls->rowleft = 0;
}

void	fill_nums(struct s_walls *walls, char **argv, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (i < n * 2)
			walls->colup[j] = argv[1][i] - '0';
		else if (i < 4 * n && argv[1][i] != ' ')
			walls->coldown[j % n] = argv[1][i] - '0';
		else if (i < 6 * n && argv[1][i] != ' ')
			walls->rowleft[j % n] = argv[1][i] - '0';
		else if (i < 8 * n && argv[1][i] != ' ')
			walls->rowright[j % n] = argv[1][i] - '0';
		j++;
		i += 2;
	}
}
