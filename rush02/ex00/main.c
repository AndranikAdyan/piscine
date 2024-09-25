/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaroyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:21:14 by ysaroyan          #+#    #+#             */
/*   Updated: 2024/09/22 23:37:38 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sizes.h"
#include <unistd.h>

void	split_number(const char *str, char ***output, int *lines);
int		parse_dict(char *filename, char ***dict, int *line_count);
void	free_dict(char **dict, int lines);
void	ft_sort_dict(char **dict, int lines);
void	print_values(char **keys, char **dict, int l);

int main(int argc, char *argv[])
{
    char **dict;
    int lines;
	char *dict_file;
	char *number_str;
	char **keys;

	lines = 0;
	dict_file = DEFAULT_DICT_FILE;
	if (argc == 2)
        number_str = argv[1];
    else if (argc == 3)
    {
        dict_file = argv[1];
        number_str = argv[2];
    }
    else
    {
        write(1, "Error\n", 6);
        return (1);
    }
 	if (parse_dict(dict_file, &dict, &lines) == -1)
    {
        write(1, "Dict Error\n", 11);
        return 1;
    }
	ft_sort_dict(dict, lines);
	int l;
	l = 0;
	split_number(number_str, &keys, &l);
	print_values(keys, dict, l);
	write(1, "\n", 1);
	free_dict(dict, lines);
    return (0);
}
