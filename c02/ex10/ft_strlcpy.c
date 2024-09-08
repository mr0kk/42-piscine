/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:40:43 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 19:26:53 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "hello world";
	char dest[30];
	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	
	int src_len = ft_strlcpy(dest, src, sizeof(dest));
	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src len: %d\n", src_len);
	
	unsigned long int i =0;
	while (i < sizeof(dest))
	{
		printf("%d ", dest[i]);
		i++;
	}
}*/
