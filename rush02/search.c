/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:23:38 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/08 23:27:53 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		leng(char *str);
void	ft_putstr(char *str, int i, int space);

int	line_ok(char *str, char *to_find)
{
	int	i;
	int	counter;
	int	len;

	i = 0;
	counter = 0;
	len = leng(to_find);
	while (str[i] != '\0' && to_find[counter] != '\0' && str[i] != ':')
	{
		if (str[i] == to_find[counter])
			counter++;
		else
			counter = 0;
		i++;
	}
	if (counter == len && str[i] == ':')
	{
		return (1);
	}
	else
		return (0);
}

int	count_characters(int file_count)
{
	int		chars_in_line;
	char	c;

	chars_in_line = 1;
	while (read(file_count, &c, 1) > 0 && c != '\n')
		chars_in_line++;
	return (chars_in_line);
}

char	*make_string(int file_write, char *line)
{
	int		index;
	char	c;

	index = 0;
	while (read(file_write, &c, 1) > 0 && c != '\n')
	{
		line[index] = c;
		index++;
	}
	line[index] = '\0';
	return (line);
}

void	find_value(int file_count, int file_write, char *number)
{
	char	*line;
	int		chars_in_line;

	while (1)
	{
		chars_in_line = count_characters(file_count);
		line = (char *)malloc(chars_in_line);
		line = make_string(file_write, line);
		if (line_ok(line, number))
		{
			ft_putstr(line, 0, 0);
			free(line);
			return ;
		}
		free(line);
	}
}

void	search(char *number, char *path)
{
	int	file_count;
	int	file_write;

	file_count = open(path, O_RDONLY);
	file_write = open(path, O_RDONLY);
	find_value(file_count, file_write, number);
	close(file_count);
	close(file_write);
}
