#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, &str, len);
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

void print_digits(char c, char **arr)
{
	int	i;

	i = 1;
	while (arr[i])
	{
		if (ft_strstr(arr[i], c))
		{
			ft_putchar(arr[i][0]);
			return ;
		}
		++i;
	}
}

void print_erknish(char first, char second, char **arr)
{
	char num[3];
	int	i;

	num[0] = first;
	num[1] = '0';
	num[2] = 0;
	if (second == '0')
	{
		ft_putstr(num);
		return ;
	}		
	if (first == '1')
	{
		num[1] = second;
		i = 11;
		while(i < 20)
			if (ft_strstr(arr[i], num))
			{
				ft_putchar(arr[i][0]);
				ft_putchar(arr[i][1]);
			}
		return ;
	}
	i = 20;
	while (i < 28)
	{
		if (ft_strstr(arr[i], num))
			ft_putstr(arr[i][3]);
		print_digit(second);
	}
}

void	print_num(char *str, char **arr)
{
	int	len;
	while(*str)
	{
		len = ft_strlen(str);
		if (len % 3 == 0)
		{
			if (str[0] != '0')
			{
				ft_putchar(str[0]);
				ft_putstr(" hundred ");
			}
			/*
			if (str[1] != '0')
				ft_putchar(str[1]);
			if (str[2] != )
			ft_putchar(str[2]);
			*/
			ft_arr[28 + (len / 3)];
			str += 3;
		}
		
	}
}

// 789

