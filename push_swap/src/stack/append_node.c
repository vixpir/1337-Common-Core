/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:54:46 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/25 18:11:02 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	append_node(t_stack *a, int val)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->value = val;
	new_node->index = 0;
	new_node->next = NULL;
	if (!a->size)
	{
		a->top = new_node;
		new_node->prev = NULL;
	}
	else
	{
		a->bottom->next = new_node;
		new_node->prev = a->bottom;
	}
	a->bottom = new_node;
	a->size++;
	return (1);
}
