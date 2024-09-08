/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:38:41 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/02 21:38:43 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	leng(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

int	check_amount(char *base)
{
	int	i;
	int	j;
	int	len;

	len = leng(base);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
			if (base[i] == '-' || base[i] == '+')
				return (0);
			if (base[j] == '-' || base[j] == '+')
				return (0);
		}
		i++;
	}
	return (1);
}

int	is_base_ok(char *base)
{
	if (leng(base) < 2)
		return (0);
	if (!check_amount(base))
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	char	c;

	if (is_base_ok(base))
	{
		len = leng(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr == -2147483648)
			{
				ft_putnbr_base(-(nbr / len), base);
				ft_putnbr_base(-(nbr % len), base);
				return ;
			}
			nbr = -nbr;
		}
		if (nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
		}
		c = base[nbr % len];
		write(1, &c, 1);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	base[] = "hwdp";

	ft_putnbr_base(45, base);
	printf("\nlen: %d\n", leng("-100000000000000000000000000000000"));
}*/
