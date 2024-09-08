/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:35:19 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 15:35:22 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	char s2[] = "ABCDAE";
	char s3[] = "";
	char s4[] = "marakujaBeczka";

	int x = ft_str_is_uppercase(s1);
	int y = ft_str_is_uppercase(s2);
	int z = ft_str_is_uppercase(s3);
	int a = ft_str_is_uppercase(s4);
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	printf("%d\n", a);
	return (0);
}*/
