/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:43:47 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/10 11:51:16 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		++i;
	}
}
/*
#include <stdio.h>
int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(arr, 6);

	int i = 0;
	while (i < 6)
		printf("%d ", arr[i++]);
	return 0;
}
*/