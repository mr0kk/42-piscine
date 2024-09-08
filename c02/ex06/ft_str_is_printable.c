/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:41:25 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 15:41:34 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str > '~' || *str < ' ')
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
	char s4[] = " ";

	int x = ft_str_is_printable(s1);
	int y = ft_str_is_printable(s2);
	int z = ft_str_is_printable(s3);
	int a = ft_str_is_printable(s4);
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	printf("%d\n", a);
	return (0);
}*/
