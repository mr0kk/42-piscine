/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:10:23 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/02 16:10:25 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0)
	{
		if (nb < 10)
		{
			c = nb + 48;
			write(1, &c, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}
/*
int	main(void)
{
	int x = 2147483647;
	ft_putnbr(x);
}*/