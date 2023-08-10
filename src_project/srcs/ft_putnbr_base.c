/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:17:29 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/03 19:29:31 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(int n);

int	ft_putnbr_base(int n, char *base)
{
	if (n < 0)
		ft_putchar('-');
	if (ft_abs(n / 10) > 0)
		ft_putnbr_base(ft_abs(n / 10));
	ft_putchar(ft_abs(n % 10) + '0');
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
