/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:17:15 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/11 16:34:08 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
		char s1[10] = "Hello";
		char s2[10];

		ft_strcpy(s2, s1);
		printf("ft_strcpy: %s\n", s2);
}
*/
