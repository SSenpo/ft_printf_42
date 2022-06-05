/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:48:00 by mmago             #+#    #+#             */
/*   Updated: 2021/12/21 16:55:13 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_putstr_fd("-2147483648");
		return (len);
	}
	if (n < 0)
	{
		len += ft_putchar_fd('-');
		n *= -1;
	}
	if (n >= 10)
	{
		len += ft_putnbr_fd(n / 10);
	}
	len += ft_putchar_fd(n % 10 + '0');
	return (len);
}
