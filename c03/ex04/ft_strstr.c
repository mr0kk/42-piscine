/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:33:12 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/29 20:33:15 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	leng(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] //tu sie jebie //&& s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (leng(str) == 0)
		return (str);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, leng(to_find)) == 0)
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "hello world";
	char find[] = "world";
	
	char *ptr = ft_strstr(str, find);
	printf("func: %p\n", ft_strstr(str, find));
	printf("ptr:  %p\n", ptr);
	printf("char:  %c\n", *ptr);
	printf("str:  %s\n", ptr);	
}*/
