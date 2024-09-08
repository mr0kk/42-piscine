/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:04:16 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/29 18:05:14 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char s1[] = "piscine";
	char s2[] = "piscine";
	
	//char s3[] = "piscineA";
	//char s4[] = "piscine";
	
	char s5[] = "piscineAb";
	char s6[] = "piscineAB";
	
	int x = ft_strncmp(s1, s2, 5);
	int y = ft_strncmp(s1, s2, 6);
	int z = ft_strncmp(s1, s2, 10);
	int f = ft_strncmp(s5, s6, 9);
	
	printf("%d\n" , x);
	printf("%d\n" , y);
	printf("%d\n" , z);
	printf("%d\n" , f);
	return (0);
}*/
