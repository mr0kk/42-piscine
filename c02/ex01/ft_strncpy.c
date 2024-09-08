/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:58:27 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 13:11:58 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "hello world!";
	char dest[50];
	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	ft_strncpy(dest, src, 5);
	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	src[1] = 'G';
	dest[4] = 'D';
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	printf("dest size: %lu\n", sizeof(dest));
	int i = 0;
	while( i <= sizeof(dest))
	{
		printf("%d ", dest[i]);
		i++;	
	}
	return 0;
}*/
