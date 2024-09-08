/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:13:35 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/31 16:13:36 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fill_map_input(char map[6][6], char *input)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < 5)
	{
		map[0][i] = input[j];
		map[5][i] = input[j + 8];
		j += 2;
		i++;
	}
	i = 1;
	j = 16;
	while (i < 5)
	{
		map[i][0] = input[j];
		map[i][5] = input[j + 8];
		j += 2;
		i++;
	}
}

void	fill_map_1and4_rows(char map[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 6)
	{
		if (map[i][0] == '1')
			map[i][1] = '4';
		if (map[i][5] == '1')
			map[i][4] = '4';
		if (map[i][0] == '4')
		{
			j = 0;
			while (j++ < 4)
				map[i][j] = j + 48;
		}
		if (map[i][5] == '4')
		{
			j = 0;
			while (j++ < 4)
				map[i][5 - j] = j + 48;
		}
		i++;
	}
}

void	fill_map_1and4_columns(char map[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 6)
	{
		if (map[0][i] == '1')
			map[1][i] = '4';
		if (map[5][i] == '1')
			map[4][i] = '4';
		if (map[0][i] == '4')
		{
			j = 0;
			while (j++ < 4)
				map[j][i] = j + 48;
		}
		if (map[5][i] == '4')
		{
			j = 0;
			while (j++ < 4)
				map[5 - j][i] = j + 48;
		}
		i++;
	}
}

void	fill_map_with_dots(char map[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			map[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
}

void	fill_map(char map[6][6], char *input)
{
	fill_map_with_dots(map);
	fill_map_input(map, input);
	fill_map_1and4_rows(map);
	fill_map_1and4_columns(map);
}
