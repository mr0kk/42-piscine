/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:44:28 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/01 21:08:56 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_error1(int argc)
{
	if (argc != 2)
		return (0);
	return (1);
}

int	is_error2(char *argv[])
{
	int		n;
	char	*input;

	input = argv[1];
	n = 0;
	while (input[n] != '\0')
	{
		n++;
	}
	if (n != 31)
		return (0);
	return (1);
}

int	is_error3(char *argv[])
{
	int		n;
	int		m;
	char	*input;

	input = argv [1];
	n = 0;
	m = 1;
	while (n < 32)
	{
		if (input[n] < '1' || input[n] > '4')
			return (0);
		n += 2;
	}
	while (m < 31)
	{
		if (input[m] != ' ')
			return (0);
		m += 2;
	}
	return (1);
}

int	is_error(int argc, char *argv[])
{
	if (!is_error1(argc))
		return (0);
	if (!is_error2(argv))
		return (0);
	if (!is_error3(argv))
		return (0);
	return (1);
}
