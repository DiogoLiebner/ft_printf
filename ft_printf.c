/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:29:55 by dlima-li          #+#    #+#             */
/*   Updated: 2025/11/03 17:58:57 by dlima-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			format++;
		if (*format == '%')
		{
			ft_putchar('%')
			counter++;
		}
		else if (*format == 'c')
		{
			int chr = va_arg(args, int);
			ft_putchar(ch);
			counter++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char *);
			while (*str)
			{
				ft_putchar(*str);
				str++;
				counter++;
			}
		}
		else 
		{
			ft_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}



	
