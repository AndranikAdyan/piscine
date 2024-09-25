/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:19:48 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/22 23:21:33 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strlen(char *str);

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

void	print_values(char **keys, char **dict, int l)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < l)
	{
		if (ft_strcmp(keys[i], dict[num]) == 0)
		{
			ft_putstr(dict[num + 1]);
			ft_putstr(" ");
			i++;
			num = 0;
		}
		num += 2;
	}
}
