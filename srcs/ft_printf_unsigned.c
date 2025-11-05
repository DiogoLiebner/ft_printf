/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:40:14 by dlima-li          #+#    #+#             */
/*   Updated: 2025/11/05 10:40:40 by dlima-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdlib.h>

int	ft_intlen(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

int	ft_printunsignedint(unsigned int nbr)
{
	int		size;
	int		i;
	char	*unsintstr;

	size = ft_intlen(nbr);
	i = size - 1;
	unsintstr = malloc (sizeof(char) * (size + 1));
	if (!unsintstr)
		return (0);
	unsintstr[size] = '\0';
	if (nbr == 0)
		unsintstr[0] = '0';
	while (nbr > 0)
	{
		unsintstr[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	ft_printstr(unsintstr);
	free(unsintstr);
	return (size);
}
