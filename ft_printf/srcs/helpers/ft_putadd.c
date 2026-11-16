/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 14:56:28 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/16 18:34:22 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_putadd(unsigned long addrs)
{
	int	count;
	int	check;

	if (!addrs)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	if (count == -1)
		return (-1);
	check = ft_puthex(addrs, 'x');
	if (check == -1)
		return (-1);
	return (count + check);
}
