/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:40:14 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/10 15:01:24 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// typedef struct s_specifier
// {
// 	char	data_type;
// 	char	flag;
// 	int		width;
// 	int		precision;
// }	t_specifier;

# define BASE_HEX_LOWCASE "0123456789abcdef"
# define BASE_HEX_UPCASE "0123456789ABCDEF"
# define BASE_DEC "0123456789"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putptr(unsigned long p);
int	ft_puthex(unsigned int n, char *base, int base_len);
int	ft_putnbr_base(int n, char *base);

#endif