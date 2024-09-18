/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:32:12 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/18 17:34:14 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
int	main()
{
	char s1[20] = "Hello";
	char s2[20] = " World";
	int i = ft_strlcat(s1, s2, 10);
	printf("%s - strlcat %d\n", s1, i);
}
*/
