/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:59:40 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/02 17:59:50 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus_counter;
	int	result;

	i = 0;
	result = 0;
	minus_counter = 0;
	while (str[i] <= ' ' || str[i] == 127)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_counter++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (minus_counter % 2)
		return (result * -1);
	return (result);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
}*/