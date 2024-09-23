/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:01:30 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/23 21:52:33 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		++i;
// 	}
// 	dest[i] = src[i];
// 	return (dest);
// }

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_av(char **av, int ac)
{
	int		min;
	int		i;
	int		j;
	int		start;

	start = 1;
	while (start < ac)
	{
		min = start;
		i = start;
		while (i < ac)
		{
			j = 0;
			while (av[min][j] && av[i][j] && av[min][j] == av[i][j])
				++j;
			if (av[min][j] > av[i][j])
				min = i;
			++i;
		}
		ft_swap(&av[min], &av[start]);
		++start;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort_av(argv, argc);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		++i;
	}
	return (0);
}
