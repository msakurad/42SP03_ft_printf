/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:40:14 by msakurad          #+#    #+#             */
/*   Updated: 2023/07/24 01:32:34 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

struct specifier
{
	char	data_type;
	char	flag;
	int		width;
	int		precision;
};

int	ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);

#endif