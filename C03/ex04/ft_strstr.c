/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:17:03 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/17 19:57:59 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*s;
	char	*start;

	if (!to_find[0])
		return (str);
	s = str;
	i = 0;
	while (*s)
	{
		if (*s == to_find[i])
		{
			if (i == 0)
				start = s;
			++i;
		}
		s++;
	}
	j = 0;
	while (to_find[j])
		++j;
	if (i == j)
		return (start);
	return (0);
}
/*
#include <stdio.h> 
#include <string.h>
int main (void)
{
	char str1 [11]="0123456789";
	char str2 [10]="";
	char *istr;

	istr = strstr(str1, str2);
	printf ("strstr: %s\n", istr);

	istr = ft_strstr(str1, str2);
	printf ("ft_strstr: %s\n", istr);
   return 0;
}*/
