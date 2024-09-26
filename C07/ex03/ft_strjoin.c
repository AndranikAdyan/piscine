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

int	get_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (ft_strlen(sep) * (size - 1));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	index;
	char	*str;

	str = (char *)malloc((get_len(size, strs, sep) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (size == 0)
		return (str);
	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[index++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
			while (sep[j])
				str[index++] = sep[j++];
		++i;
	}
	str[index] = 0;
	return (str);
}
/*
#include <stdio.h>
int     main()
{
        char    *str;
        char *strs[5] = {"felipe", "de", "paula", "alves", "montes"};
        str = ft_strjoin(5, strs, " ");
        printf("%s\n", str);
 	free(str);
	return (0);
}
*/
