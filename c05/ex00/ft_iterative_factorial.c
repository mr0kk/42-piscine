/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:12:19 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/03 14:20:16 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb >= 0)
	{
		result = 1;
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	int x = ft_iterative_factorial(5);
	printf("%d\n", x);
}*/
