/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:19:02 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/11 22:06:49 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	leng(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	read_symbols_and_line_len(struct s_map_manager *s_bob, char *map_str)
{
	int	i;
	int	len;

	i = 0;
	while (map_str[i] != '\n')
		i++;
	s_bob->symbols[0] = map_str[i - 3];
	s_bob->symbols[1] = map_str[i - 2];
	s_bob->symbols[2] = map_str[i - 1];
	i++;
	len = 0;
	while (map_str[i++] != '\n')
		len++;
	s_bob->col_count = len;
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

void	make_char_map(char *map_str, struct s_map_manager *s_bob)
{
	int	str_index;
	int	j;
	int	k;

	str_index = 0;
	while (map_str[str_index] != '\n')
		str_index++;
	str_index++;
	s_bob->map_2d = (char **)malloc(sizeof(char *) * s_bob->rows_count);
	j = 0;
	while (j < s_bob->rows_count)
		s_bob->map_2d[j++] = (char *)malloc(s_bob->col_count + 1);
	if (s_bob->map_2d == NULL)
	{
		s_bob->map_2d = NULL;
		return ;
	}
	k = 0;
	while (k < s_bob->rows_count)
	{
		j = 0;
		while (j <= s_bob->col_count)
			s_bob->map_2d[k][j++] = map_str[str_index++];
		k++;
	}
}
