/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 22:46:08 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/04 22:46:11 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	tab = NULL;
	if (min >= max)
		return (tab);
	tab = (int *)malloc((max - min) * 4);
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int *tab;
	int max = 98;
	int min = 120;
	tab = ft_range(min, max);

	int i = 0;
	while (i < max - min)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\ntab: %p\n", tab);
}*/
