/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:57:38 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 16:57:41 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "MARAKUJAKALAMBURY";
	char s2[] = "abdsSDAdsa";
	char s3[] = "";
	char s4[] = "CZy to DziaLa?!";

	ft_strlowcase(s1);
	ft_strlowcase(s2);
	ft_strlowcase(s3);
	ft_strlowcase(s4);
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);
}*/
