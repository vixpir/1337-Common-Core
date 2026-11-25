/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indices.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 14:19:28 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/25 18:10:52 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	assign_indices(t_stack *a)
{
	t_node	*node;
	t_node	*tmp;

	node = a->top;
	while (node)
	{
		tmp = a->top;
		while (tmp)
		{
			if (node->value < tmp->value)
				tmp->index++;
			tmp = tmp->next;
		}
		node = node->next;
	}
}
