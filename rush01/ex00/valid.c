/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:37:49 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/15 21:37:55 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_range(char c, int n)
{
	return (c >= '1' && c <= n + '0');
}

int	nums_count(char *arg)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (arg[i])
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			++count;
		++i;
	}
	return (count);
}

int	valid(char *arg, int n)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!check_range(arg[i], n) && arg[i] != ' ')
			return (0);
		if ((arg[i] == ' ' && arg[i + 1] == ' ') || \
				(check_range(arg[i], n) && check_range(arg[i + 1], n)))
			return (0);
		i++;
	}
	if (i != 2 * (4 * n) - 1)
		return (0);
	return (1);
}
