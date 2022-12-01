/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:51:59 by tpopescu          #+#    #+#             */
/*   Updated: 2022/12/01 17:52:24 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int	ft_hexa(unsigned long int nbr, char *base);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int	ft_putchar(char c);
int	ft_hex(int n);
int	ft_printf(char const *st, ...);
int	ft_pt(void *pt);
int	ft_call(char c, va_list args);

#endif
