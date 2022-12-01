/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:14:42 by tpopescu          #+#    #+#             */
/*   Updated: 2022/12/01 17:30:58 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long int nbr, char *base)
{
	int				i;
	unsigned int	b;

	i = 0;
	b = 0;
	if (nbr > 15)
	{
		i += ft_hexa(nbr / 16, base);
		b = nbr % 16;
		i += ft_putchar(base[b]);
	}
	else
		i += ft_putchar(base[nbr]);
	return (i);
}

int	ft_pt(void *pt)
{
	int	i;

	i = 0;
	i += ft_putchar('0');
	i += ft_putchar('x');
	i += ft_hexa((long unsigned int)pt, "0123456789abcdef");
	return (i);
}
