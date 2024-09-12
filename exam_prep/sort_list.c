/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmrok <rmrok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:38:02 by rmrok             #+#    #+#             */
/*   Updated: 2024/09/12 22:57:11 by rmrok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		x;
	int		tmp;
	t_list	*start;

	start = lst;
	while (lst->next != '\0')
	{
		x = cmp(lst->data, lst->next->data);
		if (!x)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = start;
		}
		else
		{
			lst = lst->next;
		}
	}
	lst = start;
	return (start);
}

int	main(void)
{
	t_list node1;
	node1.data = 6;
	t_list node2;
	node1.next = &node2;
	node2.data = 3;
	node2.next = NULL;
	t_list *new_node;
	new_node = sort_list(&node1, ascending);
}