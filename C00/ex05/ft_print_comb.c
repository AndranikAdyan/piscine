/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:17:59 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/08 19:24:49 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	nums[3];

	nums[0] = '0';
	nums[1] = '1';
	nums[2] = '2';
	while (nums[0] <= '7')
	{
		nums[1] = nums[0] + 1;
		while (nums[1] <= '8')
		{
			nums[2] = nums[1] + 1;
			while (nums[2] <= '9')
			{
				write(1, &nums, 3);
				if (!(nums[0] == '7' && nums[1] == '8' && nums[2] == '9'))
					write(1, ", ", 2);
				nums[2]++;
			}
			nums[1]++;
		}
		nums[0]++;
	}
}
