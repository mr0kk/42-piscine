/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:51:44 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/09 23:35:10 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int	different_chars(char c1, char c2, char c3)
{
	if (c1 == '\n' || c2 == '\n' || c3 == '\n')
		return (0);
	if (c1 == c2 || c1 == c3 || c2 == c3)
		return (0);
	return (1);
}

int	parse_raw_nbr(char *map)
{
	int	i;
	int	j;
	int	line_nbr;

	i = 0;
	if (is_digit(map[i]))
		line_nbr = map[i++] - '0';
	else
		return (0);
	while (is_digit(map[i]))
		line_nbr = line_nbr * 10 + (map[i++] - '0');
	if (!different_chars(map[i], map[i + 1], map[i + 2]))
		return (0);
	j = i + 3;
	if (map[j++] != '\n')
		return (0);
	while (map[j] != '\0')
	{
		if (map[j] != map[i] && map[j] != map[i + 1] && map[j] != '\n')
			return (0);
		j++;
	}
	return (line_nbr);
}

int	check_line(char *raw_map, int i, int first_line_lengh)
{
	int	line_len;

	line_len = 0;
	while (raw_map[i] != '\n')
	{
		line_len++;
		i++;
	}
	i++;
	if (line_len != first_line_lengh)
		return (0);
	return (i++);
}

int	get_first_line_nbr(int *i, int *line_nbr, int *first_line_lengh,
		char *raw_map)
{
	*first_line_lengh = 0;
	*line_nbr = parse_raw_nbr(raw_map);
	if (!(*line_nbr))
		return (0);
	while (raw_map[*i] != '\n')
		(*i)++;
	(*i)++;
	while (raw_map[(*i)++] != '\n')
		(*first_line_lengh)++;
	return (1);
}

int	is_map_valid(char *raw_map)
{
	int	i;
	int	line_nbr;
	int	counted_line_nbr;
	int	first_line_lengh;

	if (!get_first_line_nbr(&i, &line_nbr, &first_line_lengh, raw_map))
		return (0);
	counted_line_nbr = 1;
	while (counted_line_nbr < line_nbr)
	{
		i = check_line(raw_map, i, first_line_lengh);
		if (!i)
			return (0);
		counted_line_nbr++;
	}
	if (raw_map[i] != '\0')
		return (0);
	if (counted_line_nbr < 1 || first_line_lengh < 1)
		return (0);
	return (line_nbr);
}
