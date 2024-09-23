/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:05:14 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/23 20:13:21 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	if (nb == 0 || nb == 1)
		return (1);
	num = 1;
	while (num <= nb / 2)
	{
		if (num * num == nb)
			return (num);
		++num;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(16));
	return 0;
}
*/