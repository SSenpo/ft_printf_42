/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:53:40 by mmago             #+#    #+#             */
/*   Updated: 2021/12/20 18:35:30 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)");
		return (6);
	}
	while (s[i])
	{
		len += ft_putchar_fd(s[i]);
		i++;
	}
	return (len);
}
