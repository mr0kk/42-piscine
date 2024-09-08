/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:37:19 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/04 16:37:21 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	is_greater(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (0);
		i++;
	}
	if (str1[i] != '\0')
		return (1);
	return (0);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (is_greater(argv[j], argv[j + 1]))
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*name;

	ft_sort(argc, argv);
	i = 0;
	while (++i < argc)
	{
		name = argv[i];
		ft_putstr(name);
	}
}
