/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaroyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:30:03 by ysaroyan          #+#    #+#             */
/*   Updated: 2024/09/22 17:04:19 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int ft_atoi(const char *str)
{
    int result = 0;
    while (*str)
    {
        if (!is_digit(*str))
            return (-1);
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result);
}

int ft_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strcmp_num(const char *a, const char *b)
{
    int len_a = ft_strlen((char *)a);
    int len_b = ft_strlen((char *)b);

    if (len_a != len_b) {
        return len_a - len_b;
    }
    return ft_strcmp(a, b);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}
