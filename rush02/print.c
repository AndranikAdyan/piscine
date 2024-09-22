#include <unistd.h>
#include "sizes.h"

int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		size;

	if (!to_find && !(*to_find))
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
void print_digits(char c, char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (arr[i][0] == c)
		{
			ft_putstr(arr[i + 1]);
			return ;
		}
		i += 2;
	}
	ft_putchar(' ');
}

void print_erknish(char *str, char **arr)
{
	int	i;

	i = 0;
	if (str[0] == '1')
	{
		i = 22;
		while(i < 40)
		{
			if (ft_strcmp(&arr[i][1], &str[1]) == 0)
			{
				ft_putstr(arr[i + 1]);
				return ;
			}
			i += 2;
		}
	}
	i = 40;
	while(arr[i])
	{
		if (arr[i][0] == str[0])
		{
			ft_putstr(arr[i + 1]);
			break;
		}
		i += 2;
	}
	ft_putchar(' ');
	if (str[1] != '0')
		print_digits(str[1], arr);
}

void	print_eranish(char *str, char **arr)
{
	int	i;
	
	print_digits(str[0], arr);
	ft_putchar(' ');
	i = 0;
	while (arr[i])
	{
		if (ft_strcmp(arr[i], "100") == 0)
		{
			ft_putstr(arr[i + 1]);
			break;
		}
		i += 2;
	}
	str++;
	ft_putchar(' ');
	print_erknish(str, arr);
	ft_putchar(' ');
}

void	print_num(char *str, char **arr)
{
	int	len;

	while(*str)
	{
		len = ft_strlen(str);
		if (len % 3 == 0)
		{
			print_eranish(str, arr);
			ft_putchar(' ');
			ft_putstr(arr[56 + (2 * len / 3) + 1]);
			ft_putchar(' ');
			str += 3;
		}
		else if (len % 3 == 2)
		{
			print_erknish(str, arr);
			ft_putchar(' ');
			ft_putstr(arr[56 + (2 * len / 3) + 1]);
			ft_putchar(' ');
			str += 2;
		}
		else
		{
			print_digits(*str, arr);
			ft_putchar(' ');
			ft_putstr(arr[56 + (2 * len / 3) + 1]);
			ft_putchar(' ');
			str += 1;
		}
		while (*str == '0')
			str++;
	}
}
