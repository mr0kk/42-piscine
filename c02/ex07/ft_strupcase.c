/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:51:22 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 15:52:01 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "marakujakalambury";
	char s2[] = "ABCDAE";
	char s3[] = "";
	char s4[] = "CZy to DziaLa?!";

	ft_strupcase(s1);
	ft_strupcase(s2);
	ft_strupcase(s3);
	ft_strupcase(s4);
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);
}*/
