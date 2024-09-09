/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:19:02 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/10 00:05:23 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

char	*read_string(char *path)
{
	int		file;
	char	c;
	char	*raw_map;
	int		i;

	i = 0;
	file = open(path, O_RDONLY);
	if (file == -1)
		return (NULL);
	while (read(file, &c, 1) > 0)
		i++;
	close(file);
	raw_map = (char *)malloc(sizeof(char) * (i + 1));
	file = open(path, O_RDONLY);
	if (file == -1)
		return (NULL);
	i = 0;
	while (read(file, &c, 1) > 0)
		raw_map[i++] = c;
	raw_map[i] = '\0';
	close(file);
	return (raw_map);
}

char	**read_map(char *map_str, int rows, int col)
{
	int		str_index;
	int		j;
	int		k;
	char	**map_2d;

	str_index = 0;
	while (map_str[str_index] != '\n')
		str_index++;
	str_index++;
	while (map_str[str_index++] != '\n')
		col++;
	map_2d = (char **)malloc(sizeof(char *) * rows);
	j = 0;
	while (j < rows)
		map_2d[j++] = (char *)malloc(col);
	j = 0;
	k = -1;
	str_index -= col + 1;
	while (++k < rows)
	{
		j = 0;
		while (j <= col)
			map_2d[k][j++] = map_str[str_index++];
	}
	return (map_2d);
}
