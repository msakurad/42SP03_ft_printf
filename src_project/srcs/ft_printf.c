/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:43:20 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/11 18:03:35 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	scan_array(va_list ap, const char *format)
{
	int	len;

	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				len += ft_putchar('%');
			else if (*format == 'c')
				len += ft_putchar(va_arg(ap, int));
			else if (*format == 's')
				len += ft_putstr(va_arg(ap, char *));
			else if (*format == 'p')
				len += ft_putptr(va_arg(ap, unsigned long));
			else if (*format == 'x')
				len += ft_putnbr_base(va_arg(ap, unsigned int), BASE_HEXLW, 16);
			else if (*format == 'X')
				len += ft_putnbr_base(va_arg(ap, unsigned int), BASE_HEXUP, 16);
			else if (*format == 'd' || *format == 'i')
				len += ft_putnbr(va_arg(ap, int));
			else if (*format == 'u')
				len += ft_putnbr_base(va_arg(ap, unsigned int), BASE_DEC, 10);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	if (!format)
		return (0);
	va_start(ap, format);
	len = scan_array(ap, format);
	va_end(ap);
	return (len);
}
