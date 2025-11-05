/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:00:24 by dlima-li          #+#    #+#             */
/*   Updated: 2025/11/04 15:03:18 by dlima-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "ft_printf.h"

int	ft_ptrlen(long long ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

int	ft_printpointer(long long ptr)
{
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	else
	{
		write(1, "0x", 2);
		ft_hexprint(ptr, 'x');
	}
	return (ft_ptrlen(ptr) + 2);
}
