/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:43:46 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/29 21:43:53 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	leng(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i_dest;
	unsigned int	i_src;

	dest_len = leng(dest);
	src_len = leng(src);
	i_dest = dest_len;
	i_src = 0;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i_src] && i_src < size - dest_len - 1)
	{
		dest[i_dest + i_src] = src[i_src];
		i_src++;
	}
	dest[i_dest + i_src] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "marakuja";
	char dest[20] = "kaloryfer";
	int x = leng(dest);
	printf("len of dest: %i\n", x);
	
	printf("sezeod(dest): %lu\n", sizeof(dest));
	
 	x = ft_strlcat(dest, src, 10);
 	printf("Resulting String: %s\n", dest);
	printf("new dest leng: %i\n", x);
	printf("new dest size: %lu\n", sizeof(dest));
	int i = 0;
	while (i < x + 1)
	{
		printf("%d ", dest[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < x + 1)
	{
		printf("%c  ", dest[i]);
		i++;
	}
}*/
