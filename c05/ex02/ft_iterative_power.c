/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:38:15 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/03 14:38:19 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d pow %d: %d\n",2, 2, ft_iterative_power(2, 2));
	printf("%d pow %d: %d\n",10, 4, ft_iterative_power(10, 4));
	printf("%d pow %d: %d\n",1, 0, ft_iterative_power(1, 0));
	printf("%d pow %d: %d\n",0, 0,	 ft_iterative_power(0, 0));
}*/
