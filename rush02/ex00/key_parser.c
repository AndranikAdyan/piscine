/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarnach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:58:05 by lvarnach          #+#    #+#             */
/*   Updated: 2024/09/22 22:58:45 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	**my_realloc(char **old_array, int old_size, int new_size);
char	*my_strncpy(char *dest, const char *src, int n);
int		my_strlen(const char *str);
void	process_hundreds(const char *tr, char ***output, int *lines);
void	process_teens(const char *tr, int len, char ***output, int *lines);
void	process_tens(const char *tr, int len, char ***output, int *lines);
void	process_units(const char *tr, int len, char ***output, int *lines);
void	process_suffix(int tr_pos, char ***output, int *lines);


void	generate_suffix(int triplet_position, char *buffer)
{
	int	i;

	buffer[0] = '1';
	i = 1;
	while (i <= triplet_position * 3)
	{
		buffer[i] = '0';
		i++;
	}
	buffer[triplet_position * 3 + 1] = '\0';
}

int	check_triplet(int *len, const char *triplet)
{
	int	i;

	i = 0;
	*len = my_strlen(triplet);
	while (i < *len)
	{
		if (triplet[i] != '0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	add_to_output(char ***output, int *lines, const char *str)
{
	int	len;

	*output = my_realloc(*output, *lines, *lines + 1);
	len = my_strlen(str);
	(*output)[*lines] = malloc(len + 1);
	my_strncpy((*output)[*lines], str, len);
	(*output)[*lines][len] = '\0';
	(*lines)++;
}

// tr - triplet
void	process_triplet(const char *tr, int tr_pos, char ***output, int *lines)
{
	int		len;

	if (!check_triplet(&len, tr))
		return ;
	if (len == 3 && tr[0] != '0')
		process_hundreds(tr, output, lines);
	if (len >= 2)
	{
		if (tr[len - 2] == '1' && tr[len - 1] >= '1' && tr[len - 1] <= '9')
			process_teens(tr, len, output, lines);
		else
		{
			if (tr[len - 2] != '0')
				process_tens(tr, len, output, lines);
			if (tr[len - 1] != '0')
				process_units(tr, len, output, lines);
		}
	}
	else
	{
		if (tr[len - 1] != '0')
			process_units(tr, len, output, lines);
	}
	if (tr_pos > 0)
		process_suffix(tr_pos, output, lines);
}

void	split_number(const char *str, char ***output, int *lines)
{
	int		len;
	int		triplet_position;
	int		start;
	int		i;
	char	triplet[4];

	len = my_strlen(str);
	triplet_position = 0;
	start = len % 3;
	if (start == 0)
		start = 3;
	if (start > 0 && len > 3)
	{
		my_strncpy(triplet, str, start);
		triplet[start] = '\0';
		process_triplet(triplet, (len - 1) / 3, output, lines);
		triplet_position++;
	}
	else if (len <= 3)
		return process_triplet(str, 0, output, lines);
	i = start;
	while (i < len)
	{
		my_strncpy(triplet, &str[i], 3);
		triplet[3] = '\0';
		process_triplet(triplet, (len - 1 - i) / 3, output, lines);
		i += 3;
	}
}

#include <stdio.h>

void	print_output(char **output, int lines)
{
	int	i;

	i = 0;
	while (i < lines)
	{
		write(1, output[i], my_strlen(output[i]));
		write(1, "\n", 1);
		free(output[i]);
		i++;
	}
	free(output);
}
/*
int	main(int argc, char *argv[])
{
	char	**output;
	int		lines;

	if (argc == 2)
	{
		output = NULL;
		lines = 0;
		split_number(argv[1], &output, &lines);
		print_output(output, lines);
	}
	return (0);
}*/
