/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:11:30 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/23 16:55:06 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

double	compute_disorder(t_stack *a)
{
	double	mistakes;
	double	total_pairs;
	t_node	*node;
	t_node	*swap;

	if (a->size < 2)
		return (0.0);
	mistakes = 0;
	total_pairs = 0;
	node = a->top;
	while (node)
	{
		swap = node->next;
		while (swap)
		{
			total_pairs += 1;
			if (node->value > swap->value)
				mistakes += 1;
			swap = swap->next;
		}
		node = node->next;
	}
	return (mistakes / total_pairs);
}
