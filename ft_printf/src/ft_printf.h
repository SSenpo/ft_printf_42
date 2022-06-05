/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:03:04 by mmago             #+#    #+#             */
/*   Updated: 2021/12/15 19:21:12 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_tohex(unsigned long int nb, char *to, int base);
int		ft_putpointer_fd(unsigned long n);
int		ft_putnbr_u(unsigned int n);
int		ft_putstr_fd(char *s);
int		ft_putnbr_fd(int n);
int		ft_putchar_fd(char c);

#endif
