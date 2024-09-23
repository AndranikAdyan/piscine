/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:15:06 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/23 19:21:00 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int	res;

	if (n < 0)
		return (0);
	res = 1;
	while (n > 1)
		res *= n--;
	return (res);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
	return 0;
}
*/