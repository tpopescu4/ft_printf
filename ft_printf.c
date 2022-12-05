/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:09:45 by tpopescu          #+#    #+#             */
/*   Updated: 2022/12/01 17:40:06 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_call(char c, va_list args)
{
	int	l;

	l = -1;
	if (c == 'd')
		l += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		l += ft_putunbr(va_arg(args, unsigned int));
	if (c == 'i')
		l += ft_putnbr(va_arg(args, int));
	if (c == 'c')
		l += ft_putchar(va_arg(args, int));
	if (c == 's')
		l += ft_putstr(va_arg(args, char *));
	if (c == 'X')
		l += ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (c == 'x')
		l += ft_hexa(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'p')
		l += ft_pt(va_arg(args, void *));
	if (c == '%')
		l += ft_putchar('%');
	return (l);
}

int	ft_printf(char const *st, ...)
{
	va_list	args;
	int		i;
	int		l;
	int		count;

	l = 0;
	count = 0;
	i = -1;
	va_start(args, st);
	while (st[++i])
	{
		if (st[i] == '%')
		{
			count++;
			i++;
			l += ft_call(st[i], args);
		}
		else
			ft_putchar(st[i]);
	}
	l += i - count;
	return (l);
}
