/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:23:35 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/11 17:07:25 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ulong_p)
{
	int	len;

	len = ft_putstr("0x");
	len += ft_putnbr_base(ulong_p, BASE_HEX_LOWCASE, 16);
	return (len);
}
