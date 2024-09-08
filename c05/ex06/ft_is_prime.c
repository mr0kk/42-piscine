/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:02:33 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/03 21:04:51 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d: %d\n", 4, ft_is_prime(4));
	printf("%d: %d\n", 11, ft_is_prime(11));
	printf("%d: %d\n", 101, ft_is_prime(101));
}*/
