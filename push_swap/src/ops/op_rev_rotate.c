/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 22:50:25 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/22 23:40:53 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	do_reverse_rotate(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->top->prev = stack->bottom;
	stack->bottom->prev->next = NULL;
	stack->bottom = stack->bottom->prev;
	stack->top->prev->next = stack->top;
	stack->top = stack->top->prev;
	stack->top->prev = NULL;
}
