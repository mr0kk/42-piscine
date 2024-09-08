/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:17:15 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/29 15:17:18 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	char	*p1;
	char	*p2;

	p1 = s1;
	p2 = s2;
	while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
/*
#include <stdio.h>

int	main()
{
	char s1[] = "piscine";
	char s2[] = "piscine";
	
	char s3[] = "piscineA";
	char s4[] = "piscineB";
	
	char s5[] = "piscine";
	char s6[] = "piscineAB";
	
	int x = ft_strcmp(s1, s2);
	int y = ft_strcmp(s3, s4);
	int z = ft_strcmp(s5, s6);
	
	printf("%d\n" , x);
	printf("%d\n" , y);
	printf("%d\n" , z);
	return (0);
}*/
