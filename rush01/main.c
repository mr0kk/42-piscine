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

#include <unistd.h>

void	write_map(char map[6][6]) //delete later
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			printf("%c ", map[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}

int		is_error(int argc, char *argv[]);
int		is_solvable(char map[6][6]);
int		solve(char map[6][6], int row, int col);
void	fill_map(char map[6][6], char *input);

int	main(int argc, char *argv[])
{
	char	map[6][6];
	char	*input;

	if (!(is_error(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	input = argv[1];
	fill_map(map, input);
	if (!(is_solvable(map)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!solve(map, 1, 1))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		write_map(map);
	}
	return (0);
}
