/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:59:50 by msakurad          #+#    #+#             */
/*   Updated: 2023/08/17 13:41:32 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (write(1, NULL_STR, NULL_STR_LEN));
	while (*s)
	{
		len += write(1, s, 1);
		s++;
	}
	return (len);
}
