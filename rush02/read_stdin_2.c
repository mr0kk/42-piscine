/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:47:16 by mjanowsk          #+#    #+#             */
/*   Updated: 2024/09/11 22:06:42 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	copy_buffer(char *src, char *dst, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

char	*double_buffer(char *raw_map, int *capacity, int total_bytes)
{
	char	*new_map;

	*capacity *= 2;
	new_map = (char *)malloc(*capacity);
	if (!new_map)
	{
		free(raw_map);
		return (NULL);
	}
	copy_buffer(raw_map, new_map, total_bytes);
	free(raw_map);
	return (new_map);
}
