/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:00:34 by mmago             #+#    #+#             */
/*   Updated: 2021/12/21 16:57:51 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tohex(unsigned long int nb, char *to, int base)
{
	int	len;

	len = 0;
	if (nb >= (unsigned long int)base)
		len += ft_tohex(nb / base, to, base);
	len += ft_putchar_fd(to[nb % base]);
	return (len);
}
