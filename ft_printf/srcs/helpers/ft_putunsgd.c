/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsgd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 14:55:41 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/16 18:34:49 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_putunsgd(unsigned int n)
{
	int	count;
	int	check;

	count = 0;
	if (n >= 10)
	{
		count = ft_putunsgd(n / 10);
		if (count == -1)
			return (-1);
	}
	check = ft_putchar((n % 10) + '0');
	if (check == -1)
		return (-1);
	return (count + check);
}
