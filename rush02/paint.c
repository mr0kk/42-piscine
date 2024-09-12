/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:11:41 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/11 22:06:51 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	paint_sqr(struct s_map_manager *s_bob, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < s_bob->rows_count)
	{
		j = 0;
		while (j < s_bob->col_count)
		{
			if (i > x - s_bob->max_sqr && i <= x)
				if (j > y - s_bob->max_sqr && j <= y)
					s_bob->map_2d[i][j] = s_bob->symbols[2];
			j++;
		}
		i++;
		if (i > x && j > y)
			return ;
	}
}

void	find_square(struct s_map_manager *s_bob)
{
	int	i;
	int	j;

	i = 0;
	while (i < s_bob->rows_count)
	{
		j = 0;
		while (j < s_bob->col_count)
		{
			if (s_bob->map_int[i][j] == s_bob->max_sqr)
			{
				paint_sqr(s_bob, i, j);
				return ;
			}
			j++;
		}
		i++;
	}
}
