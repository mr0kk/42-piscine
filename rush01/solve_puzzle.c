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

int	is_solvable_rows(char map[6][6]);
int	is_solvable_colums(char map[6][6]);
int	is_visibility_ok(char map[6][6]);

int	is_ok(char map[6][6])
{
	if (!is_solvable_colums(map))
		return (0);
	if (!is_solvable_rows(map))
		return (0);
	if (!is_visibility_ok(map))
		return (0);
	return (1);
}

int	solve(char map[6][6], int row, int col)
{
	char	num;

	if (row == 5)
		return (1);
	if (col == 5)
		return (solve(map, row + 1, 1));
	if (map[row][col] != '.')
		return (solve(map, row, col + 1));
	num = '0';
	while (++num <= '4')
	{
		map[row][col] = num;
		if (is_ok(map))
			if (solve(map, row, col + 1))
				return (1);
		map[row][col] = '.';
	}
	return (0);
}
