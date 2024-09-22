/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaroyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:21:14 by ysaroyan          #+#    #+#             */
/*   Updated: 2024/09/22 20:37:19 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sizes.h"
#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str);
void	print_num(char *str, char **arr);
int		parse_dict(char *filename, char ***dict, int *line_count);
void	free_dict(char **dict, int lines);
void	ft_sort_dict(char **dict, int lines);

int main(int argc, char *argv[])
{
	char **dict;
	int lines;
	int i;
	char *dict_file;
	char *number_str;

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
	i = 0;

	if (ft_strlen(argv[1]) > 3)
		print_num(argv[1], dict);


/*	while (i < lines * 2) {
        printf("%s: %s\n", dict[i], dict[i + 1]);
        i += 2;
    }
*/
	free_dict(dict, lines);
	return (0);
}
