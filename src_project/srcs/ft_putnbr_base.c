/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:59:40 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/11 17:06:55 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long ulong_n, char *base, int base_len)
{
	int	len;

	len = 0;
	if (ulong_n / base_len > 0)
		len = ft_putnbr_base(ulong_n / base_len, base, base_len);
	len += ft_putchar(base[ulong_n % base_len]);
	return (len);
}
