/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic-utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaroyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:00:35 by ysaroyan          #+#    #+#             */
/*   Updated: 2024/09/22 16:33:52 by ysaroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sizes.h"
#include <stdlib.h>

void	ft_strcpy(char *dest, char *src);
int		ft_atoi(const char *str);
int ft_strcmp_num(const char *a, const char *b);

void	ft_sort_dict(char **dict, int lines)
{
    for (int i = 0; i < lines - 1; i++) {
        for (int j = 0; j < lines - i - 1; j++) {
            if (ft_strcmp_num(dict[j * 2], dict[(j + 1) * 2]) > 0) {
                char *temp_key = dict[j * 2];
                dict[j * 2] = dict[(j + 1) * 2];
                dict[(j + 1) * 2] = temp_key;
                char *temp_value = dict[j * 2 + 1];
                dict[j * 2 + 1] = dict[(j + 1) * 2 + 1];
                dict[(j + 1) * 2 + 1] = temp_value;
            }
        }
    }
}

void	free_dict(char **dict, int lines)
{
	int	i;

	i = 0;
    while (i < lines * 2)
	{
        free(dict[i]);
		i++;
	}
	free(dict);
}
