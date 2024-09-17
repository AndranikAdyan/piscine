/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:28:17 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/17 18:38:26 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if ((s1[i] || s2[i]) && i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	int n = 5;
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
