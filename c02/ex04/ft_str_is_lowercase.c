/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:53:30 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 13:54:44 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	char s4[] = "marakujaBeczka";

	int x = ft_str_is_lowercase(s1);
	int y = ft_str_is_lowercase(s2);
	int z = ft_str_is_lowercase(s3);
	int a = ft_str_is_lowercase(s4);
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	printf("%d\n", a);
	return (0);
}*/
