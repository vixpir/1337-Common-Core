/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 22:15:59 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/22 22:49:44 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	do_rotate(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->bottom->next = stack->top;
	stack->top->next->prev = NULL;
	stack->top = stack->top->next;
	stack->bottom->next->prev = stack->bottom;
	stack->bottom = stack->bottom->next;
	stack->bottom->next = NULL;
}
