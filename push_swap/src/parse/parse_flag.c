/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 12:54:30 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/24 13:28:34 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	parse_flag(const char *arg, t_config *cfg)
{
	size_t	len;

	if (cfg->bench)
		return (0);
	len = ft_strlen(arg) + 1;
	if (!ft_strncmp(arg, "--simple", len))
		cfg->strategy = STRAT_SIMPLE;
	else if (!ft_strncmp(arg, "--medium", len))
		cfg->strategy = STRAT_MEDIUM;
	else if (!ft_strncmp(arg, "--complex", len))
		cfg->strategy = STRAT_COMPLEX;
	else if (!ft_strncmp(arg, "--adaptive", len))
		cfg->strategy = STRAT_ADAPTIVE;
	else if (!ft_strncmp(arg, "--bench", len))
		cfg->bench = 1;
	else
		return (0);
	return (1);
}
