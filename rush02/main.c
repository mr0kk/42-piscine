/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:35:21 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/11 22:43:58 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	free_maps(struct s_map_manager *s_bob)
{
	int	j;

	j = 0;
	while (j < s_bob->rows_count)
		free(s_bob->map_2d[j++]);
	free(s_bob->map_2d);
	j = 0;
	while (j < s_bob->rows_count)
		free(s_bob->map_int[j++]);
	free(s_bob->map_int);
}

int	create_map(char *file, struct s_map_manager *s_bob)
{
	char	*map_str;

	map_str = read_string(file);
	if (map_str == NULL)
	{
		write(STDERR_FILENO, "map error\n", 10);
		free(map_str);
		return (0);
	}
	s_bob->rows_count = is_map_valid(map_str);
	if (!s_bob->rows_count)
	{
		write(STDERR_FILENO, "map error\n", 10);
		return (0);
	}
	read_symbols_and_line_len(s_bob, map_str);
	make_char_map(map_str, s_bob);
	free(map_str);
	if (s_bob->map_2d == NULL)
	{
		free_maps(s_bob);
		return (0);
	}
	return (1);
}

void	solve(struct s_map_manager *s_bob)
{
	make_int_map(s_bob);
	find_square(s_bob);
	display_map(s_bob);
	free_maps(s_bob);
}

int	do_if_stdin(struct s_map_manager *s_bob)
{
	char	*str;

	str = read_map_from_stdin();
	s_bob->rows_count = is_map_valid(str);
	if (!s_bob->rows_count)
	{
		write(STDERR_FILENO, "map error\n", 10);
		return (0);
	}
	read_symbols_and_line_len(s_bob, str);
	make_char_map(str, s_bob);
	free(str);
	if (s_bob->map_2d == NULL)
	{
		free_maps(s_bob);
		return (0);
	}
	solve(s_bob);
	return (1);
}

int	main(int argc, char **argv)
{
	struct s_map_manager	s_bob;
	int						i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (!create_map(argv[i], &s_bob))
			{
				i++;
				continue ;
			}
			solve(&s_bob);
			i++;
			if (i != argc)
				write(1, "\n", 1);
		}
	}
	else
	{
		if (!do_if_stdin(&s_bob))
			return (1);
	}
}
