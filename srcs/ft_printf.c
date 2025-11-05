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
		return (write (1, "%", 1));
	else if (format == 'c')
		counter += ft_printchar(va_arg(args, int));
	else if (format == 's')
		counter += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		counter += ft_printpointer(va_arg(args, long long));
	else if (format == 'd' || format == 'i')
		counter += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		counter += ft_printunsignedint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		counter += ft_hexprint(va_arg(args, long long), format);
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
			print_length += ft_formats(format[i + 1], args);
			i++;
		}
		else
			print_length += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
/*
#include <stdio.h>

int	main(void)
{
	char c = 'a';
	char *str = NULL;
	int	i = 1;
	unsigned int j = 436;
	int 	hex = 4636;
	void *ptr = &str;
	void *nptr = NULL;

	ft_printf("ft_printf implementation test:\n");
	ft_printf("The Character C is equal to: %c\n And the String str is equal to : %s\n", c, str);
	ft_printf("The Integer I is equal to : %d\n And the Unsigned Integer is equal to %u\n", i, j);
	ft_printf("The Integer hex that is equal to %d, is %X or %x in its hexadecimal form\n", hex, hex, hex);
	ft_printf("The Address of the pointer ptr is : %p\nAnd the Address of the pointer nptr is %p\n\n\n\n", ptr, nptr);
	
	printf("printf implementation:\n");
	printf("The Character C is equal to: %c\n And the String str is equal to : %s\n", c, str);
	printf("The Integer I is equal to : %d\n And the Unsigned Integer is equal to %u\n", i, j);
	printf("The Integer hex that is equal to %d, is %X or %x in its hexadecimal form\n", hex, hex, hex);
	printf("The Address of the pointer ptr is : %p\nAnd the Address of the pointer nptr is %p\n", ptr, nptr);

	return (0);
}*/