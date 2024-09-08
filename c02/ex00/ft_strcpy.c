/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:13:12 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/26 22:29:32 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>

int main(void)
{
	char src[] = "hello world!";
	char dest[50];
	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	ft_strcpy(dest, src);
	
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
