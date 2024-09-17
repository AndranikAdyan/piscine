/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:54:49 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/08 16:57:17 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_arr(char *nums)
{
	nums[0] = '0';
	nums[1] = '0';
	nums[2] = ' ';
	nums[3] = '0';
	nums[4] = '1';
}

int	is_last_num(char *nums)
{
	if (nums[0] == '9' && nums[1] == '8' && \
				nums[3] == '9' && nums[4] == '9')
		return (1);
	return (0);
}

void	ft_print_comb2(void)
{
	char	nums[5];

	fill_arr(nums);
	while (nums[0] <= '9' && nums[1] <= '8')
	{
		nums[3] = nums[0];
		nums[4] = nums[1] + 1;
		while (nums[3] <= '9')
		{
			write(1, &nums, 5);
			if (!is_last_num(nums))
				write(1, ", ", 2);
			if (++nums[4] > '9')
			{
				nums[3]++;
				nums[4] = '0';
			}
		}
		if (++nums[1] == '9')
		{
			nums[0]++;
			nums[1] = '0';
		}
	}
}
