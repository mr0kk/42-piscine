/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:35:21 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/10 00:14:14 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int	leng(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	char	*map_str;
	int		rows;
	char	**map_2d;
	int		j;
	int		i;

	i = 1;
	while (i < argc)
	{
		printf("%s:\n", argv[i]);
		map_str = read_string(argv[i]);
		if (!map_str)
		{
			write(STDERR_FILENO, "map error\n", 10);
			i++;
			continue ;
		}
		rows = is_map_valid(map_str);
		if (!rows)
		{
			write(STDERR_FILENO, "map error\n", 10);
			i++;
			continue ;
		}
		map_2d = read_map(map_str, rows, 0);
		j = 0;
		while (j < rows)
		{
			printf("%s", map_2d[j]);
			j++;
		}
		i++;
		free(map_str);
		while (rows)
			free(map_2d[rows--]);
		free(map_2d);
	}
}
