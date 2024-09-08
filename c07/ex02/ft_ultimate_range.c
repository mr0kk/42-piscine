/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 23:30:44 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/04 23:30:47 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * 4);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int *ptr;
	int min = 10;
	int max = 25;

	int size = ft_ultimate_range(&ptr, min, max);
	printf("size of range: %d\n", size);

	if (ptr)
	{
		int i = -1;
		while (++i < size)
			printf("%d ", ptr[i]);
	}
	free(ptr);
	return (0);
}*/