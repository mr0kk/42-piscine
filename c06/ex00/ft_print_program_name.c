/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:35:48 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/03 23:37:53 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	/*
	char *name;
	name = argv[0];
	*/
	while (**argv != '\0')
		write(1, (*argv)++, 1);
	write(1, "\n", 1);
	write(1, &argc, 0);
}
