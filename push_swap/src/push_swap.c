/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 22:09:13 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/26 01:08:48 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;

	if (argc < 2)
		return (0);
	ft_bzero(&ps, sizeof(t_ps));
	if (!parse_args(argc, argv, &ps.a, &ps.cfg))
	{
		free_stack(&ps.a);
		write(2, "Error\n", 6);
		return (1);
	}
	assign_indices(&ps.a);
	ps.bench.disorder = compute_disorder(&ps.a);
	printf("strategy=%d bench=%d disorder=%.2f\n",
		ps.cfg.strategy, ps.cfg.bench, ps.bench.disorder);
	free_stack(&ps.a);
	free_stack(&ps.b);
	return (0);
}
