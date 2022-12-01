/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:13:18 by tpopescu          #+#    #+#             */
/*   Updated: 2022/12/01 17:31:02 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr < 0)
		nbr *= -1;
	if (nbr < 10)
	{
		nbr += 48;
		write(1, &nbr, 1);
		i += 1;
		return (i);
	}
	i += ft_putnbr(nbr / 10);
	i += ft_putnbr(nbr % 10);
	return (i);
}

int	ft_putnbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = 147483648;
		i += 2;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		i += 1;
	}
	if (nbr < 10)
	{
		nbr += 48;
		write(1, &nbr, 1);
		i += 1;
		return (i);
	}
	i += ft_putnbr(nbr / 10);
	i += ft_putnbr(nbr % 10);
	return (i);
}
