/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:43:31 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/26 14:57:49 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = size -1;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (tab[j] > tab[j + 1])
				swap(tab + j, tab + j + 1);
			j++;
		}
		i--;
	}
}
