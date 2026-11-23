/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 22:57:33 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/22 23:47:50 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	do_swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack->size < 2)
		return ;
	first = stack->top;
	second = stack->top->next;
	if (stack->size == 2)
		stack->bottom = first;
	else
		second->next->prev = first;
	first->next = second->next;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	stack->top = second;
}
