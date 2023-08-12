/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:43:20 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/12 08:33:40 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_scan_array(va_list ap, const char *format);
static int	ft_find_print_specifier(va_list ap, char specifier);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	if (!format)
		return (0);
	va_start(ap, format);
	len = ft_scan_array(ap, format);
	va_end(ap);
	return (len);
}

static int	ft_scan_array(va_list ap, const char *format)
{
	int	len;

	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_find_print_specifier(ap, *format);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	return (len);
}

static int	ft_find_print_specifier(va_list ap, char specifier)
{
	int	len;

	len = 0;
	if (specifier == '%')
		len += ft_putchar('%');
	else if (specifier == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'p')
		len += ft_putptr(va_arg(ap, unsigned long));
	else if (specifier == 'x')
		len += ft_putnbr_base(va_arg(ap, unsigned int), BASE_HEXLW, 16);
	else if (specifier == 'X')
		len += ft_putnbr_base(va_arg(ap, unsigned int), BASE_HEXUP, 16);
	else if (specifier == 'd' || specifier == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		len += ft_putnbr_base(va_arg(ap, unsigned int), BASE_DEC, 10);
	return (len);
}
