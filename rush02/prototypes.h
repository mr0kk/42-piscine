/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:52:39 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/11 22:55:18 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

struct		s_map_manager
{
	char	**map_2d;
	int		**map_int;
	int		rows_count;
	int		col_count;
	char	symbols[3];
	int		max_sqr;
};

int			is_digit(char c);
int			leng(char *str);
char		*read_string(char *path);
int			is_map_valid(char *raw_map);
void		fill_int_map(struct s_map_manager *s_bob);
void		make_int_map(struct s_map_manager *s_bob);
void		find_square(struct s_map_manager *s_bob);
void		make_char_map(char *map_str, struct s_map_manager *s_bob);
void		read_symbols_and_line_len(struct s_map_manager *s_bob,
				char *map_str);
char		*read_map_from_stdin(void);
char		*double_buffer(char *raw_map, int *capacity, int total_bytes);
void		copy_buffer(char *src, char *dst, int len);
void		display_map(struct s_map_manager *s_bob);

#endif