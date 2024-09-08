/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:39:18 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/04 19:39:20 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 1;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(len);
	i = 0;
	if (dest == NULL)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char			src[] = "aaaaaaaaaagggggggg";
	char			*dest;
	unsigned int	i;

	dest = ft_strdup(src);
	printf("dest: %s\n", dest);
	i = 0;
	printf("size of dest: %li\n", sizeof(dest));
	while (dest[i] != '\0')
	{
		printf("%d ", dest[i]);
		i++;
	}
	printf("%d ", dest[i + 1]);
	i = 0;
	printf("\n");
	while (dest[i] != '\0')
	{
		printf("%c ", dest[i]);
		i++;
	}
	printf("%d ", dest[i + 1]);
}*/