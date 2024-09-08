/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:41:59 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/05 14:42:02 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	leng(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*ptr;
	int		j;

	len = 0;
	i = -1;
	if (size == 0)
		return ("");
	while (++i < size)
		len += leng(strs[i]);
	len += (size - 1) * leng(sep) + 1;
	ptr = (char *)malloc(len);
	i = ft_strlcat(ptr, *strs, len);
	j = 0;
	while (++j < size)
	{
		i = ft_strlcat(ptr, sep, len);
		i = ft_strlcat(ptr, strs[j], len);
	}
	ptr[i] = '\0';
	return (ptr);
}
#include <stdio.h>

int	main(void)
{
	char *tab[] = {  "Hello", "world"  };
	char sep[] = "";
	char *str;
	int i = 0;
	str = *tab;
	str = ft_strjoin(2, tab, sep);

	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (str[i])
	{
		printf("%d ", str[i]);
		i++;
	}
	printf("%d ", str[i]);
}
