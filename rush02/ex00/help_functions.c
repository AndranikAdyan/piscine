/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarnach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:34:33 by lvarnach          #+#    #+#             */
/*   Updated: 2024/09/22 17:36:50 by lvarnach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*my_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	my_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	**my_realloc(char **old_array, int old_size, int new_size)
{
	char	**new_array;
	int		i;

	new_array = (char **)malloc(new_size * sizeof(char *));
	if (new_array)
	{
		i = 0;
		while (i < old_size)
		{
			new_array[i] = old_array[i];
			i++;
		}
	}
	free(old_array);
	return (new_array);
}
