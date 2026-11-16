/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <lilyass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:08:20 by lilyass           #+#    #+#             */
/*   Updated: 2026/11/16 18:29:43 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int	conversion(va_list arg, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_putadd(va_arg(arg, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putunsgd(va_arg(arg, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(arg, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (ft_putchar(c));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		total;
	int		check;

	if (!format)
		return (-1);
	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i] && total != -1)
	{
		if (format[i] == '%' && format[i + 1])
			check = conversion(args, format[++i]);
		else if (format[i] == '%')
			break ;
		else
			check = ft_putchar(format[i]);
		if (check == -1)
			total = -1;
		else
			total += check;
		i++;
	}
	return (va_end(args), total);
}
