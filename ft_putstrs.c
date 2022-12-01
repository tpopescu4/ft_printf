/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:13:49 by tpopescu          #+#    #+#             */
/*   Updated: 2022/12/01 17:31:05 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		i += write(1, "(null)", 6);
		return (i);
	}
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putchar(char c)
{
	int	s;

	s = 0;
	s = write (1, &c, 1);
	return (s);
}
