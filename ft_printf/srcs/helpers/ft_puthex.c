/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 14:56:50 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/16 18:34:35 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_puthex(unsigned long hex, char format)
{
	int		count;
	int		check;
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (hex >= 16)
	{
		count = ft_puthex(hex / 16, format);
		if (count == -1)
			return (-1);
	}
	check = ft_putchar(base[hex % 16]);
	if (check == -1)
		return (-1);
	return (count + check);
}
