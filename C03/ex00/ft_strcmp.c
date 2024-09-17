/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:53:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/17 18:25:25 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	printf("strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d", ft_strcmp(s1, s2));
	return (0);
}
*/
