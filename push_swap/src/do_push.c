/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 18:45:59 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/22 22:12:24 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	do_push(t_stack *src, t_stack *dst)
{
	t_node	*node;

	if (src->size == 0)
		return ;
	node = src->top;
	src->top = node->next;
	if (src->top)
		src->top->prev = NULL;
	else
		src->bottom = NULL;
	if (!dst->top)
	{
		dst->bottom = node;
		dst->bottom->next = NULL;
	}
	else
	{
		dst->top->prev = node;
		node->next = dst->top;
	}
	dst->top = node;
	src->size--;
	dst->size++;
}
