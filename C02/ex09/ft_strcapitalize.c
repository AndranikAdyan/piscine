/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:38:17 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/12 21:18:58 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if ((*str >= 'a' && *str <= 'z') || \
			(*str >= 'A' && *str <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && \
				(!str[i - 1] || !ft_str_is_alpha(&str[i - 1])))
			str[i] -= 32;
		++i;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
}
*/
