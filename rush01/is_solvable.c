/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:13:35 by rmrok             #+#    #+#             */
/*   Updated: 2024/08/31 16:13:36 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_tab0(int tab[5])
{
	int	i;

	i = -1;
	while (i++ < 5)
		tab[i] = 0;
}

int	is_solvable_rows(char map[6][6])
{
	int	i;
	int	j;
	int	tab[5];

	fill_tab0(tab);
	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			tab[map[i][j] - 48]++;
			j++;
		}
		j = 1;
		while (j < 5)
		{
			if (tab[j] > 1)
				return (0);
			j++;
		}
		fill_tab0(tab);
		i++;
	}
	return (1);
}

int	is_solvable_colums(char map[6][6])
{
	int	i;
	int	j;
	int	tab[5];

	fill_tab0(tab);
	j = 1;
	while (j < 5)
	{
		i = 1;
		while (i < 5)
		{
			tab[map[i][j] - 48]++;
			i++;
		}
		i = 1;
		while (i < 5)
		{
			if (tab[i] > 1)
				return (0);
			i++;
		}
		fill_tab0(tab);
		j++;
	}
	return (1);
}

int	is_solvable(char map[6][6])
{
	if (is_solvable_colums(map))
		return (1);
	if (is_solvable_rows(map))
		return (1);
	return (0);
}
