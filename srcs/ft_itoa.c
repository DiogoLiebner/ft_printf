/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:21:48 by dlima-li          #+#    #+#             */
/*   Updated: 2025/10/20 13:47:08 by dlima-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_transform(char *istr, long nbr, int size)
{
	int	i;

	i = size - 1;
	if (nbr == 0)
		istr[i] = '0';
	while (nbr > 0)
	{
		istr[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	long	nbr;
	char	*istr;

	nbr = n;
	size = ft_intlen(n);
	istr = malloc(sizeof(char) * (size + 1));
	if (!istr)
		return (NULL);
	istr[size] = '\0';
	if (nbr < 0)
	{
		istr[0] = '-';
		nbr = -nbr;
	}
	ft_transform(istr, nbr, size);
	return (istr);
}
