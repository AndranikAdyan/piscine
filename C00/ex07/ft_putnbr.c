/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:33:07 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/08 20:43:46 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		n;
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	n = 1;
	while (nb / n >= 10)
		n *= 10;
	while (n > 0)
	{
		c = (nb / n) + '0';
		write(1, &c, 1);
		nb = nb % n;
		n /= 10;
	}
}
