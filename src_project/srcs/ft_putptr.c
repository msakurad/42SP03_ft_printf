/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:23:35 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/17 13:48:40 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ulong_p)
{
	int	len;

	if (!ulong_p)
		return (write(1, NULL_PTR, NULL_PTR_LEN));
	len = ft_putstr("0x");
	len += ft_putnbr_base(ulong_p, BASE_HEXLW, 16);
	return (len);
}
