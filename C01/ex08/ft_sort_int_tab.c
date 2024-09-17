/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:09:34 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/10 15:30:42 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	min;
	int	i;
	int	start;

	start = 0;
	while (start < size)
	{
		min = start;
		i = start;
		while (i < size)
		{
			if (tab[min] > tab[i])
				min = i;
			++i;
		}
		ft_swap(&tab[min], &tab[start]);
		++start;
	}
}
/*
#include <stdio.h>
int main()
{
	int	arr[7] = {7, 4, 4, 3, 2, 3, 1};
	ft_sort_int_tab(arr, 7);

	int i = 0;
	while (i < 7){
		printf("%d ", arr[i++]);
	}
}
*/
