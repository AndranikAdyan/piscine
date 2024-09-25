/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:33:06 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/25 21:47:06 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	s = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		++i;
	}
	s[i] = 0;
	return (s);
}
/*
#include <stdio.h>
int main()
{
	char *s1;
	char *s2 = "Hello";
	s1 = ft_strdup(s2);
	printf("%s", s1);
	free(s1);
	return (0);
}
*/
