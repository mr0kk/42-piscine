/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_for_math.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:24:52 by mkolodzi          #+#    #+#             */
/*   Updated: 2024/09/08 22:29:41 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	search(char *number, char *path);

void	check_0(char **number, int i, int len_3, char *path)
{
	char	hund[2];

	if (number[i][0] != '0')
	{
		hund[0] = number[i][0];
		hund[1] = '\0';
		search(hund, path);
		write(1, " ", 1);
		search("100", path);
		if (i != len_3 - 1 || number[i][1] != '0' || number[i][2] != '0')
			write(1, " ", 1);
	}
}

void	check_1(char **number, int i, int len_3, char *path)
{
	char	tens[3];

	check_0(number, i, len_3, path);
	tens[2] = '\0';
	if (number[i][1] > '1')
	{
		tens[0] = number[i][1];
		tens[1] = '0';
		search(tens, path);
		if (i != len_3 - 1 || number[i][2] != '0')
			write(1, " ", 1);
		if (number[i][2] != '0')
		{
			search(&number[i][2], path);
			if (i != len_3 - 1)
				write(1, " ", 1);
		}
	}
}

void	check_2(char **number, int i, int len_3, char *path)
{
	char	tens[3];

	tens[2] = '\0';
	if (number[i][1] == '1')
	{
		tens[0] = '1';
		tens[1] = number[i][2];
		search(tens, path);
		if (i != len_3 - 1)
			write(1, " ", 1);
	}
	else if (number[i][1] == '0' && number[i][2] != '0')
	{
		search(&number[i][2], path);
		if (i != len_3 - 1)
			write(1, " ", 1);
	}
}

void	make_last(char *last, int help)
{
	int	k;

	k = 1;
	last[0] = '1';
	while (k <= 3 * help)
	{
		last[k] = '0';
		k++;
	}
	last[k] = '\0';
	help--;
}
