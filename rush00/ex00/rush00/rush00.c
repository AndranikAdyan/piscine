/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatvaka <apatvaka@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:14:50 by apatvaka          #+#    #+#             */
/*   Updated: 2024/09/07 17:57:33 by apatvaka         ###   ########.fr       */
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

void	rush00(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return ;
	i = 0;
	print_row('o', '-', 'o', x);
	while (i < y - 2)
	{
		print_row('|', ' ', '|', x);
		++i;
	}
	if (i == y - 2)
		print_row('o', '-', 'o', x);
}
