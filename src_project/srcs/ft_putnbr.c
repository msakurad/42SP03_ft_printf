/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:47:28 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/12 08:34:44 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(int n);

int	ft_putnbr(int int_n)
{
	int	len;

	len = 0;
	if (ft_abs(int_n / 10) > 0)
	{
		if (int_n < 0)
			ft_putchar('-');
		len = ft_putnbr(ft_abs(int_n / 10));
	}
	if (int_n < 0)
		len += 1;
	len += ft_putchar(ft_abs(int_n % 10) + '0');
	return (len);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
