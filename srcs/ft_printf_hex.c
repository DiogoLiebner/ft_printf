/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:49:58 by dlima-li          #+#    #+#             */
/*   Updated: 2025/11/05 09:50:21 by dlima-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_hexnumlength(long long nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 16;
	}
	return (len);
}

void	ft_hexconvert(long long nbr, char format)
{
	if (nbr < 0)
		return ;
	if (nbr >= 16)
	{
		ft_hexconvert(nbr / 16, format);
		ft_hexconvert(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_printchar(nbr + '0');
		else
		{
			if (format == 'x')
				ft_printchar(nbr - 10 + 'a');
			if (format == 'X')
				ft_printchar(nbr - 10 + 'A');
			else
				return ;
		}
	}
}

int	ft_hexprint(long long nbr, char format)
{
	if (nbr == 0)
		write (1, "0", 1);
	else
		ft_hexconvert(nbr, format);
	return (ft_hexnumlength(nbr));
}
