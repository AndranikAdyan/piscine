/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:39:09 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/12 21:12:28 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		++i;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_lowercase("aasdg"));
	printf("%d\n", ft_str_is_lowercase("Gfd"));
	printf("%d\n", ft_str_is_lowercase("zsfgSDFgv"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase(" "));
	return 0;
}
*/
