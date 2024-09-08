/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:05:28 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/03 15:05:41 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d pow %d: %d\n", 2, 2, ft_recursive_power(2, 2));
	printf("%d pow %d: %d\n", 10, 4, ft_recursive_power(10, 4));
	printf("%d pow %d: %d\n", 1, 0, ft_recursive_power(1, 0));
	printf("%d pow %d: %d\n", 0, 0, ft_recursive_power(0, 0));
}*/
