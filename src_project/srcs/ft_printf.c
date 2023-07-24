/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:43:20 by msakurad          #+#    #+#             */
/*   Updated: 2023/07/24 14:57:08 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		ft_putchar(*format);
		format++;
		len++;
	}
	ft_putchar('\n');
	va_end(ap);
	return (len);
}
