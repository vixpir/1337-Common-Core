/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:06:26 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/24 18:14:31 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	free_tokens(char **tokens)
{
	size_t	i;

	if (!tokens)
		return ;
	i = 0;
	while (tokens[i])
		free(tokens[i++]);
	free(tokens);
}

static int	add_tokens(char **tokens, t_stack *a)
{
	size_t	j;
	int		val;

	if (!tokens || !tokens[0])
	{
		free_tokens(tokens);
		return (0);
	}
	j = 0;
	while (tokens[j])
	{
		if (!parse_int(tokens[j++], &val) || has_duplicate(a, val)
			|| !append_node(a, val))
		{
			free_tokens(tokens);
			return (0);
		}
	}
	free_tokens(tokens);
	return (1);
}

int	parse_args(int argc, char **argv, t_stack *a, t_config *cfg)
{
	size_t	i;

	i = 1;
	while (i < (size_t)argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '-')
		{
			if (!parse_flag(argv[i], cfg))
				return (0);
		}
		else if (!add_tokens(ft_split(argv[i], ' '), a))
			return (0);
		i++;
	}
	if (cfg->strategy == STRAT_NONE)
		cfg->strategy = STRAT_ADAPTIVE;
	return (1);
}
