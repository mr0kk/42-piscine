/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:18:19 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/08 23:31:43 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	to_return(char **number, int len_3, char *path);
char	**return_str(char *str, int len_3, int len);
void	search(char *number, char *path);
int		check_key(char *str);
int		leng(char *str);

void	ft_putstr(char *str, int i, int space)
{
	int	first_word;

	first_word = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == ' ')
			space = 1;
		else
		{
			if (space && first_word)
			{
				write(1, " ", 1);
				space = 0;
			}
			write(1, &str[i], 1);
			first_word = 1;
		}
		i++;
	}
}

void	i_want_home(char *number, char *path)
{
	int	len;
	int	len_3;

	len = leng(number);
	if (len % 3 == 0)
	{
		len_3 = len / 3;
	}
	else
		len_3 = len / 3 + 1;
	if (!check_key(number))
		return ;
	if (len == 1 && number[0] == '0')
		search("0", path);
	to_return(return_str(number, len_3, len), len_3, path);
	write(1, "\n", 1);
}

int	check_file(char *path)
{
	int	file;

	file = open(path, O_RDONLY);
	if (file == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	else
	{
		close(file);
		return (1);
	}
}

int	main(int argc, char **argv)
{
	char	*path;
	char	*number;

	if (argc == 2)
	{
		path = "numbers.dict";
		number = argv[1];
	}
	else if (argc == 3)
	{
		path = argv[1];
		number = argv[2];
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!check_file(path))
		return (0);
	i_want_home(number, path);
	return (0);
}
