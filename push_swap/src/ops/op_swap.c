/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 22:57:33 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/25 18:37:35 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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

void	sa(t_ps *ps)
{
	if (ps->a.size < 2)
		return ;
	do_swap(&ps->a);
	ps->bench.sa++;
	ps->bench.total++;
	write(1, "sa\n", 3);
}

void	sb(t_ps *ps)
{
	if (ps->b.size < 2)
		return ;
	do_swap(&ps->b);
	ps->bench.sb++;
	ps->bench.total++;
	write(1, "sb\n", 3);
}

void	ss(t_ps *ps)
{
	if (ps->a.size < 2 && ps->b.size < 2)
		return ;
	do_swap(&ps->a);
	do_swap(&ps->b);
	ps->bench.ss++;
	ps->bench.total++;
	write(1, "ss\n", 3);
}
