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

int	vion_up(char map[6][6])
{
	int	col;
	int	i;
	int	max_seen;
	int	count;
	int	clue;

	col = 0;
	while (++col < 5)
	{
		max_seen = 0;
		count = 0;
		clue = map[0][col] - 48;
		i = 0;
		while (++i < 5)
		{
			if (map[i][col] - 48 > max_seen)
			{
				max_seen = map[i][col] - 48;
				count++;
			}
		}
		if (count != clue)
			return (0);
	}
	return (1);
}

int	vion_down(char map[6][6])
{
	int	col;
	int	i;
	int	max_seen;
	int	count;
	int	clue;

	col = 0;
	while (++col < 5)
	{
		max_seen = 0;
		count = 0;
		clue = map[5][col] - 48;
		i = 5;
		while (--i > 0)
		{
			if (map[i][col] - 48 > max_seen)
			{
				max_seen = map[i][col] - 48;
				count++;
			}
		}
		if (count != clue)
			return (0);
	}
	return (1);
}

int	vion_left(char map[6][6])
{
	int	row;
	int	i;
	int	max_seen;
	int	count;
	int	clue;

	row = 0;
	while (++row < 5)
	{
		max_seen = 0;
		count = 0;
		clue = map[row][0] - 48;
		i = 0;
		while (++i < 5)
		{
			if (map[row][i] - 48 > max_seen)
			{
				max_seen = map[row][i] - 48;
				count++;
			}
		}
		if (count != clue)
			return (0);
	}
	return (1);
}

int	vion_right(char map[6][6])
{
	int	row;
	int	i;
	int	max_seen;
	int	count;
	int	clue;

	row = 0;
	while (++row < 5)
	{
		max_seen = 0;
		count = 0;
		clue = map[row][5] - 48;
		i = 5;
		while (--i > 0)
		{
			if (map[row][i] - 48 > max_seen)
			{
				max_seen = map[row][i] - 48;
				count++;
			}
		}
		if (count != clue)
			return (0);
	}
	return (1);
}

int	is_visibility_ok(char map[6][6])
{
	if (!vion_up(map))
		return (0);
	if (!vion_down(map))
		return (0);
	if (!vion_left(map))
		return (0);
	if (!vion_right(map))
		return (0);
	return (1);
}
