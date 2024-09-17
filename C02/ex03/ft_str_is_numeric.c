/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:35:45 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/12 21:11:46 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = ;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		++i;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_numeric("5659"));
	printf("%d\n", ft_str_is_numeric("47 455"));
	printf("%d\n", ft_str_is_numeric("0"));
	printf("%d\n", ft_str_is_numeric("44 das"));
	printf("%d\n", ft_str_is_numeric(""));
	return 0;
}
*/
