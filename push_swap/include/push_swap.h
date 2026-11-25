/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 23:29:30 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/25 18:48:41 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

// Strategy enumeration
typedef enum e_strategy
{
	STRAT_NONE,
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX,
	STRAT_ADAPTIVE
}	t_strategy;

// Configuration structure
typedef struct s_config
{
	t_strategy	strategy;
	int			bench;
}	t_config;

// Node structures
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

// Stack structure
typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}	t_stack;

// Benchmarking structure
typedef struct s_bench
{
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
	int		total;
	double	disorder;
}	t_bench;

// Push Swap structure
typedef struct s_ps
{
	t_stack		a;
	t_stack		b;
	t_config	cfg;
	t_bench		bench;
}	t_ps;

// Parsing & Setup
int		parse_int(const char *str, int *out);
int		parse_flag(const char *arg, t_config *cfg);
int		parse_args(int argc, char **argv, t_stack *a, t_config *cfg);
int		has_duplicate(t_stack *a, int val);
int		append_node(t_stack *a, int val);
void	assign_indices(t_stack *a);
void	free_stack(t_stack *stack);

// Utils
double	compute_disorder(t_stack *a);

// Core Engines
void	do_push(t_stack *src, t_stack *dst);
void	do_swap(t_stack *stack);
void	do_rotate(t_stack *stack);
void	do_reverse_rotate(t_stack *stack);

// Operations
void	pa(t_ps *ps);
void	pb(t_ps *ps);
void	sa(t_ps *ps);
void	sb(t_ps *ps);
void	ss(t_ps *ps);
void	ra(t_ps *ps);
void	rb(t_ps *ps);
void	rr(t_ps *ps);
void	rra(t_ps *ps);
void	rrb(t_ps *ps);
void	rrr(t_ps *ps);

#endif
