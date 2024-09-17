/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatvaka <apatvaka@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:27:37 by apatvaka          #+#    #+#             */
/*   Updated: 2024/09/07 18:04:21 by apatvaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(char start, char mid, char end, int len)
{
	int	i;

	i = 0;
	ft_putchar(start);
	while (i < len - 2)
	{
		ft_putchar(mid);
		++i;
	}
	if (i == len - 2)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush03(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return ;
	i = 0;
	print_row('A', 'B', 'C', x);
	while (i < y - 2)
	{
		print_row('B', ' ', 'B', x);
		++i;
	}
	if (i == y - 2)
		print_row('A', 'B', 'C', x);
}
