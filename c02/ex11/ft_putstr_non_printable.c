/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:27:43 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/27 19:41:55 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int x)
{
	char	*kod;
	char	slash;

	slash = '\\';
	kod = "0123456789abcdef";
	write(1, &slash, 1);
	write(1, &kod[x / 16], 1);
	write(1, &kod[x % 16], 1);
}

int	is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str != '\0')
	{
		c = (unsigned char)*str;
		if (is_printable(c))
			write(1, &c, 1);
		else
			hex((int) c);
		str++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "Coucou\ntu vas bien ?";
	
	ft_putstr_non_printable(s);
}*/
