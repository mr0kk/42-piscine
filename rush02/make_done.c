/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_done.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:33:57 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/11 22:40:53 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int	aft_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	fill_int_map(struct s_map_manager *s_bob)
{
	int	i;
	int	j;

	s_bob->max_sqr = 0;
	i = 0;
	while (i < s_bob->rows_count)
	{
		j = 0;
		while (j < s_bob->col_count)
		{
			if (s_bob->map_2d[i][j] == s_bob->symbols[1])
				s_bob->map_int[i][j] = 0;
			else if (i == 0 || j == 0)
				s_bob->map_int[i][j] = 1;
			else
				s_bob->map_int[i][j] = aft_min(s_bob->map_int[i][j - 1],
						s_bob->map_int[i - 1][j], s_bob->map_int[i - 1][j - 1])
					+ 1;
			if (s_bob->map_int[i][j] > s_bob->max_sqr)
				s_bob->max_sqr = s_bob->map_int[i][j];
			j++;
		}
		i++;
	}
}

void	make_int_map(struct s_map_manager *s_bob)
{
	int	j;

	s_bob->map_int = (int **)malloc(sizeof(int *) * s_bob->rows_count);
	j = 0;
	while (j < s_bob->rows_count)
		s_bob->map_int[j++] = (int *)malloc(sizeof(int) * (s_bob->col_count
					+ 1));
	fill_int_map(s_bob);
}

void	display_map(struct s_map_manager *s_bob)
{
	int		i;
	int		z;
	char	c;

	i = 0;
	while (i < s_bob->rows_count)
	{
		z = 0;
		while (z < s_bob->col_count)
		{
			c = s_bob->map_2d[i][z];
			write(1, &c, 1);
			z++;
		}
		write(1, "\n", 1);
		i++;
	}
}
