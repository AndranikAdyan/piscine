/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:29:06 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/12 21:16:42 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char c[10] = "HelLo!";
	ft_strlowcase(c);
	printf("%s", c);
}
*/
