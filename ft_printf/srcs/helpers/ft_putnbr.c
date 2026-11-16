/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 14:58:55 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/16 18:34:39 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		check;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		num = -num;
		if (ft_putchar('-') == -1)
			return (-1);
		count++;
	}
	if (num >= 10)
	{
		check = ft_putnbr(num / 10);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_putchar((num % 10) + '0');
	if (check == -1)
		return (-1);
	return (count + check);
}
