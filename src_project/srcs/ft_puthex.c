/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:59:40 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/10 15:02:22 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char *base, int base_len)
{
	int	len;

	len = 0;
	if (n / base_len > 0)
		ft_puthex(n / base_len, base, base_len);
	len += ft_putchar(base[n % base_len]);
	return (len);
}
