/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:30:31 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/23 20:35:58 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	num = 2;
	while (num <= nb / 2)
	{
		if (nb % num == 0)
			return (0);
		++num;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		++nb;
	}
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(8));
	return 0;
}
*/