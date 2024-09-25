/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakopian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:02:21 by pakopian          #+#    #+#             */
/*   Updated: 2024/09/22 16:53:28 by pakopian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	input_valid(char *number_str)
{
	int	i;

	i = 0;
    if (number_str[0] == '0' && number_str[1] != '\0')
        return (0);
	while (number_str[i])
	{
		if (number_str[i] >= '0' && number_str[i] <= '9')
		{
			++i;
		}
		else
			return (0);
	}
	return (1);
}
