/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 22:50:25 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/25 18:37:28 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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

void	rra(t_ps *ps)
{
	if (ps->a.size < 2)
		return ;
	do_reverse_rotate(&ps->a);
	ps->bench.rra++;
	ps->bench.total++;
	write(1, "rra\n", 4);
}

void	rrb(t_ps *ps)
{
	if (ps->b.size < 2)
		return ;
	do_reverse_rotate(&ps->b);
	ps->bench.rrb++;
	ps->bench.total++;
	write(1, "rrb\n", 4);
}

void	rrr(t_ps *ps)
{
	if (ps->a.size < 2 && ps->b.size < 2)
		return ;
	do_reverse_rotate(&ps->a);
	do_reverse_rotate(&ps->b);
	ps->bench.rrr++;
	ps->bench.total++;
	write(1, "rrr\n", 4);
}
