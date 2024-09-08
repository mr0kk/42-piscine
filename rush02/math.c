/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:18:19 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/08 23:32:01 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	search(char *number, char *path);
int		leng(char *str);
void	check_1(char **number, int i, int len_3, char *path);
void	check_2(char **number, int i, int len_3, char *path);
void	make_last(char *last, int help);

void	make_zero(char **number, int len_3)
{
	int	i;
	int	j;

	i = -1;
	while (++i < len_3)
	{
		j = 0;
		while (j < 4)
			number[i][j++] = '0';
	}
}

void	make_array_of_numbers(char **number, char *str, int len_3, int len)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	check = 0;
	while (len_3)
	{
		j = 0;
		if (i == 0 && len % 3 != 0)
		{
			if (len % 3 == 1)
				j = 2;
			else
				j = 1;
		}
		while (j < 3)
			number[i][j++] = str[check++];
		number[i++][3] = '\0';
		len_3--;
	}
}

char	**return_str(char *str, int len_3, int len)
{
	char	**number;
	int		i;

	i = 0;
	number = (char **)malloc(sizeof(char *) * len_3);
	while (i < len_3)
		number[i++] = (char *)malloc(4);
	make_zero(number, len_3);
	make_array_of_numbers(number, str, len_3, len);
	return (number);
}

int	checking_last(char **number, int i, int len_3)
{
	int	j;

	i++;
	while (i < len_3)
	{
		j = 0;
		while (j < 3)
		{
			if (number[i][j] != '0')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	to_return(char **number, int len_3, char *path)
{
	char	last[38];
	int		i;
	int		help;

	help = len_3 - 1;
	i = 0;
	while (i < len_3)
	{
		make_last(last, help);
		help--;
		check_1(number, i, len_3, path);
		check_2(number, i, len_3, path);
		if ((help >= 0) && (number[i][0] != '0' || number[i][1] != '0'
				|| number[i][2] != '0'))
		{
			search(last, path);
			if (checking_last(number, i, len_3))
				write(1, " ", 1);
		}
		i++;
	}
	i = 0;
	while (i < len_3)
		free(number[i++]);
	free(number);
}
