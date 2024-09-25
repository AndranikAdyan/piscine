/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:37:54 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/25 22:13:51 by aadyan           ###   ########.fr       */
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

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		index;
	char	*str;
	int		len;
	
	len = 0;
	while (strs[i])
		len += ft_strlen(strs[i++]);
	len += sizeof(sep) * (size - 1);
	str = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	index = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			str[index++] = strs[i][j++];
		j = 0;
		if (i != size)
			while (sep[j])
				str[index++] = sep[j++];
		++i;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char **words = {"hello", "world", "Anush"};

	char *str;
	str = ft_strjoin(3, words, ", ");
	int i = 0;
	while (str[i])
	{
		printf("%c", str[i]);
		++i;
	}
}







