/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:43:20 by msakurad          #+#    #+#             */
/*   Updated: 2023/07/24 01:46:00 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	// struct specifier	a;
	int	len;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		// if (*format == '%')
		// {
			
		// }
		ft_putstr(".");
		len++;
	}
	va_end(ap);
	return (len);
}
