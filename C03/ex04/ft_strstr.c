/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:17:03 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/19 15:34:30 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		size;

	if (!to_find[0])
		return (str);
	size = ft_strlen(to_find);
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == to_find[k])
		{
			k++;
			if (k == size)
				return (str + i - size + 1);
		}
		else
		{
			i = i - k;
			k = 0;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h> 
#include <string.h>
int main(void)
{
	char str1 [100]="Hello, world wrld";
	char str2 [100]="";
	char *istr;

	istr = strstr(str1, str2);
	printf ("strstr:\t\t%s\n", istr);

	istr = ft_strstr(str1, str2);
	printf ("ft_strstr:\t%s\n", istr);
	return 0;
}
*/
