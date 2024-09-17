/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:31:00 by aadyan            #+#    #+#             */
/*   Updated: 2024/09/12 21:10:59 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || \
					(str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		++i;
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_alpha("aasdfkgsadf"));
	printf("%d\n", ft_str_is_alpha("GIslkdskS"));
	printf("%d\n", ft_str_is_alpha("asdkjfsdkSKK-="));
	printf("%d\n", ft_str_is_alpha("adsg  sdfaadsf "));
	printf("%d\n", ft_str_is_alpha(""));
	return 0;
}
*/
