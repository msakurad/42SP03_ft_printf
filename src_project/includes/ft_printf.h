/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:40:14 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/17 13:49:26 by msakurad         ###   ########.fr       */
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

# define BASE_HEXLW "0123456789abcdef"
# define BASE_HEXUP "0123456789ABCDEF"
# define BASE_DEC "0123456789"
# define NULL_STR "(null)"
# define NULL_STR_LEN 6
# define NULL_PTR "(nil)"
# define NULL_PTR_LEN 5

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putptr(unsigned long ulong_p);
int	ft_putnbr(int int_n);
int	ft_putnbr_base(unsigned long ulong_n, char *base, int base_len);

#endif