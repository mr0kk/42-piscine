/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:29:30 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 13:29:37 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "marakujakalambury";
	char s2[] = "123456789";
	char s3[] = "";

	int x = ft_str_is_numeric(s1);
	int y = ft_str_is_numeric(s2);
	int z = ft_str_is_numeric(s3);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	return (0);
}*/
