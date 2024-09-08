/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:11:29 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 17:23:06 by rmrok            ###   ########.fr       */
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

int	is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (is_alphanumeric(str[0]) == 1)
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i - 1]) == 0 && is_alphanumeric(str[i]) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "HELLO";
	char s2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char s3[] = " s DSS-w?dS";
	char s4[] = "hello";
	
	ft_strcapitalize(s1);
	ft_strcapitalize(s2);
	ft_strcapitalize(s3);
	ft_strcapitalize(s4);
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);
	
	return (0);
}*/
