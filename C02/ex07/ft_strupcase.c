/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:09:21 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/12 21:15:22 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char c[10] = "HelLo!";
	ft_strupcase(c);
	printf("%s", c);
}
*/
