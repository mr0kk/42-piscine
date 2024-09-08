/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:17:49 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/24 15:37:21 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	check(int n)
{
	if (n < 0)
		return (0);
	else
		return (n);
}

void	row(char a, char b, char c, int x)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (i < x - 2)
	{
		ft_putchar(b);
		i++;
	}
	ft_putchar(c);
	ft_putchar('\n');
}

void	column(char a, char b, int y)
{
	int	i;

	i = 0;
	ft_putchar(a);
	ft_putchar('\n');
	while (i < y - 2)
	{
		ft_putchar(b);
		ft_putchar('\n');
		i++;
	}
	ft_putchar(a);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	x = check(x);
	y = check(y);
	j = 0;
	if (x > 1 && y > 1)
	{
		row('A', 'B', 'C', x);
		while (j < y - 2)
		{
			row('B', ' ', 'B', x);
			j++;
		}
		row('A', 'B', 'C', x);
	}
	else if (x > 1 && y == 1)
		row('A', 'B', 'C', x);
	else if (x == 1 && y == 1)
		ft_putchar('A');
	else if (x == 1 && y > 1)
		column('A', 'B', y);
}
