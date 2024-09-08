/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:26:41 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/29 19:26:44 by rmrok            ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = leng(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char src[] = "123456789";
	char dest[30]= "ABCDEFGHI";
	printf("dest len: %d\n", leng(src));
	printf("dest size: %lu\n", sizeof(src));
	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	
	ft_strcat(dest, src);
	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	unsigned int i = 0;
	while (i < sizeof(dest))
	{
		printf("%c  ", dest[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < sizeof(dest))
	{
		printf("%d ", dest[i]);
		i++;
	}
}*/
