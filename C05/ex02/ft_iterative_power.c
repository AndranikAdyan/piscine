/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:31:22 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/23 19:43:09 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res *= nb;
		--power;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(-2, 9));
	return 0;
}
*/