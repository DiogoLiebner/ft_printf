/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:53:02 by dlima-li          #+#    #+#             */
/*   Updated: 2025/11/04 12:57:42 by dlima-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_A
# define LIBFTPRINTF_A

# include <stdarg.h>
# include <unistd.h>

int		ft_formats(const char format, va_list args);
int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int nbr);
int		ft_intlen(unsigned int nbr);
int		ft_printunsignedint(unsigned int nbr);
int		ft_hexnumlength(int nbr);
int		ft_hexprint(int nbr, char format);

void	ft_hexconvert(int nbr, char format);

#endif
