/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:27 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 13:27:02 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	char s2[] = "123456789AAA";
	char s3[] = "";

	int x = ft_str_is_alpha(s1);
	int y = ft_str_is_alpha(s2);
	int z = ft_str_is_alpha(s3);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	return (0);
}*/
