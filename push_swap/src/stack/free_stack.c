/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 12:20:19 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/25 18:11:10 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*node;
	t_node	*next;

	if (!stack)
		return ;
	node = stack->top;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	stack->top = NULL;
	stack->bottom = NULL;
	stack->size = 0;
}
