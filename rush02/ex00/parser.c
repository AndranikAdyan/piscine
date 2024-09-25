/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaroyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:20:12 by ysaroyan          #+#    #+#             */
/*   Updated: 2024/09/22 16:39:42 by ysaroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "sizes.h"

int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);
void	free_dict(char **dict, int lines);

char	*trim_spaces(char *str) {
    while (*str == ' ')
        str++;
    char *end = str + ft_strlen(str) - 1;
    while (end > str && *end == ' ')
        *end-- = '\0';
    return str;
}

int parse_dict(char *filename, char ***dict, int *line_count)
{
    int fd, bytes_read;
    char *buffer;
    char *line_start, *colon, *key, *value;
    char **temp_dict;
    int lines = 0;
    int capacity = INITIAL_LINES;
    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return -1;
    buffer = (char *)malloc((CHUNK_SIZE + 1) * sizeof(char));
    if (!buffer)
    {
        close(fd);
        return -1;
    }
    temp_dict = (char **)malloc(capacity * 2 * sizeof(char *));
    if (!temp_dict)
    {
        free(buffer);
        close(fd);
        return -1;
    }

    while ((bytes_read = read(fd, buffer, CHUNK_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0';

        line_start = buffer;
        for (int i = 0; i < bytes_read; i++)
        {
            if (buffer[i] == '\n' || i == bytes_read - 1)
            {
                if (i == bytes_read - 1 && buffer[i] != '\n')
                    i++;
                buffer[i] = '\0';
                colon = line_start;
                while (*colon && *colon != ':')
                    colon++;
                if (*colon == ':')
                {
                    *colon = '\0';
                    key = trim_spaces(line_start);
                    value = trim_spaces(colon + 1);
                    if (lines >= capacity)
                    {
                        capacity *= 2;
                        char **new_dict = (char **)malloc(capacity * 2 * sizeof(char *));
                        if (!new_dict)
                        {
                            free(buffer);
                            free_dict(temp_dict, lines);
                            close(fd);
                            return -1;
                        }
                        for (int j = 0; j < lines * 2; j++)
                            new_dict[j] = temp_dict[j];
                        free(temp_dict);
                        temp_dict = new_dict;
                    }
                    temp_dict[lines * 2] = (char *)malloc(ft_strlen(key) + 1);
                    temp_dict[lines * 2 + 1] = (char *)malloc(ft_strlen(value) + 1);

                    if (!temp_dict[lines * 2] || !temp_dict[lines * 2 + 1])
                    {
                        free(buffer);
                        free_dict(temp_dict, lines);
                        close(fd);
                        return (-1);
                    }
                    ft_strcpy(temp_dict[lines * 2], key);
                    ft_strcpy(temp_dict[lines * 2 + 1], value);
                    lines++;
                }
                line_start = buffer + i + 1;
            }
        }
    }

    free(buffer);
    close(fd);

    *dict = temp_dict;
    *line_count = lines;
    return 0;
}
