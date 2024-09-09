/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:52:39 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/10 00:10:48 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*read_string(char *path);
int		is_digit(char c);
int		test_file(int file);
char	*read_string(char *path);
char	**read_map(char *map_str, int rows, int col);
int		is_map_valid(char *raw_map);
int		get_first_line_nbr(int *i, int *line_nbr, int *first_line_lengh,
			char *raw_map);
int		check_line(char *raw_map, int i, int first_line_lengh);
int		parse_raw_nbr(char *map);
int		different_chars(char c1, char c2, char c3);