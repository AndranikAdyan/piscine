/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:28:02 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/19 17:46:51 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		++i;
	while (!is_digit(str[i]))
	{
		if (str[i] != '-' && str[i] != '+')
			return (0);
		if (str[i++] == '-')
			sign = -sign;
	}
	while (is_digit(str[i]))
	{
		num *= 10;
		num = (num + str[i++] - '0');
	}
	return (num * sign);
}
/*
int main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	(void)argc;
	(void)argv;
}
*/
