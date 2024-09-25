/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:59:10 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/25 18:47:24 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int size;

	if (min >= max)
	{	
		*range = NULL;
		return (-1);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (size);
}
/*
#include <stdio.h>
int main()
{
	int *arr;
	int min = 11;
	int max = 10;
	int i = 0;
	printf("%d\n", ft_ultimate_range(&arr, min, max));
	while (i < max - min)
		printf("%d ", arr[i++]);
	free(arr);
}
*/
