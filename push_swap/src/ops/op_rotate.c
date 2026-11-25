/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 22:15:59 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/25 18:37:31 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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

void	ra(t_ps *ps)
{
	if (ps->a.size < 2)
		return ;
	do_rotate(&ps->a);
	ps->bench.ra++;
	ps->bench.total++;
	write(1, "ra\n", 3);
}

void	rb(t_ps *ps)
{
	if (ps->b.size < 2)
		return ;
	do_rotate(&ps->b);
	ps->bench.rb++;
	ps->bench.total++;
	write(1, "rb\n", 3);
}

void	rr(t_ps *ps)
{
	if (ps->a.size < 2 && ps->b.size < 2)
		return ;
	do_rotate(&ps->a);
	do_rotate(&ps->b);
	ps->bench.rr++;
	ps->bench.total++;
	write(1, "rr\n", 3);
}
