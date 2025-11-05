/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:29:55 by dlima-li          #+#    #+#             */
/*   Updated: 2025/11/04 12:47:57 by dlima-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

int	ft_formats(const char format, va_list args)
{
	int	counter;

	counter = 0;
	if (format == '%')
		write (1, "%", 1)
	else if (format == 'c')

	else if (format == 's')

	else if (format == 'p')

	else if (format == 'd')

	else if (format == 'i')

	else if (format == 'u')

	else if (format == 'x')

	else if (format == 'X')

	return (counter);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			print_length += ft_formats(format[i + 1, args]);
			i++;
		}
		else
			print_length += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
