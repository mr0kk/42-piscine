/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:40:19 by mjanowsk          #+#    #+#             */
/*   Updated: 2024/09/11 22:36:45 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

#define BUFFER_SIZE 1024

char	*append_buffer(char *raw_map, char *buffer, int *total_bytes,
		int bytes_read)
{
	int	i;

	i = 0;
	while (i < bytes_read)
	{
		raw_map[*total_bytes] = buffer[i];
		(*total_bytes)++;
		i++;
	}
	return (raw_map);
}

char	*init_raw_map(int *current_capacity, int *total_bytes)
{
	char	*raw_map;

	*current_capacity = BUFFER_SIZE;
	raw_map = (char *)malloc(*current_capacity);
	if (!raw_map)
		return (NULL);
	*total_bytes = 0;
	return (raw_map);
}

char	*read_and_expand(char *raw_map, int *current_capacity, int *total_bytes)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (*total_bytes + bytes_read > *current_capacity)
		{
			raw_map = double_buffer(raw_map, current_capacity, *total_bytes);
			if (!raw_map)
				return (NULL);
		}
		raw_map = append_buffer(raw_map, buffer, total_bytes, bytes_read);
		bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0)
	{
		free(raw_map);
		return (NULL);
	}
	return (raw_map);
}

char	*terminate_raw_map(char *raw_map, int total_bytes)
{
	raw_map[total_bytes] = '\0';
	return (raw_map);
}

char	*read_map_from_stdin(void)
{
	char	*raw_map;
	int		total_bytes;
	int		current_capacity;

	raw_map = init_raw_map(&current_capacity, &total_bytes);
	if (!raw_map)
		return (NULL);
	raw_map = read_and_expand(raw_map, &current_capacity, &total_bytes);
	if (!raw_map)
		return (NULL);
	return (terminate_raw_map(raw_map, total_bytes));
}
