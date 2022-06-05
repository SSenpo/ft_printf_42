/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:01:57 by mmago             #+#    #+#             */
/*   Updated: 2021/12/21 17:01:03 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer_fd(unsigned long n)
{
	char	*hex;
	char	tmp[17];
	int		len;
	int		i;

	if (!n)
	{
		write(1, "0x0", 3);
		return (3);
	}
	i = 0;
	hex = "0123456789abcdef";
	while (n)
	{
		tmp[i++] = hex[n % 16];
		n /= 16;
	}
	tmp[i] = '\0';
	len = i + 2;
	i--;
	write(1, "0x", 2);
	while (i >= 0)
		write(1, &tmp[i--], 1);
	return (len);
}
