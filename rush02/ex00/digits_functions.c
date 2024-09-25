/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarnach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:04:03 by lvarnach          #+#    #+#             */
/*   Updated: 2024/09/22 21:07:14 by lvarnach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	add_to_output(char ***output, int *lines, const char *str);
void	generate_suffix(int triplet_position, char *buffer);

void	process_hundreds(const char *tr, char ***output, int *lines)
{
	char	buffer[3];

	buffer[0] = tr[0];
	buffer[1] = '\0';
	buffer[2] = '\0';
	add_to_output(output, lines, buffer);
	add_to_output(output, lines, "100");
}

void	process_teens(const char *tr, int len, char ***output, int *lines)
{
	char	buffer[3];

	buffer[0] = '1';
	buffer[1] = tr[len - 1];
	buffer[2] = '\0';
	add_to_output(output, lines, buffer);
}

void	process_tens(const char *tr, int len, char ***output, int *lines)
{
	char	buffer[3];

	buffer[0] = tr[len - 2];
	buffer[1] = '0';
	buffer[2] = '\0';
	add_to_output(output, lines, buffer);
}

void	process_units(const char *tr, int len, char ***output, int *lines)
{
	char	buffer[3];

	buffer[0] = tr[len - 1];
	buffer[1] = '\0';
	buffer[2] = '\0';
	add_to_output(output, lines, buffer);
}

void	process_suffix(int tr_pos, char ***output, int *lines)
{
	char	*buffer;

	buffer = (char *)malloc(tr_pos * 3 + 2);
	generate_suffix(tr_pos, buffer);
	add_to_output(output, lines, buffer);
	free(buffer);
}
