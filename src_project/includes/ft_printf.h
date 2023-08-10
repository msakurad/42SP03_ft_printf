/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:40:14 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/03 19:28:53 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// typedef struct s_specifier
// {
// 	char	data_type;
// 	char	flag;
// 	int		width;
// 	int		precision;
// }	t_specifier;

# define HEX_BASE_LOWCASE "0123456789abcdef"
# define HEX_BASE_UPCASE "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putptr(unsigned long p);
int	ft_putnbr_base(int n, char *base);

#endif