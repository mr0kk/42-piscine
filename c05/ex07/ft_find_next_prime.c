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

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(21));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(101));
}*/
