/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoan.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:21:35 by igoikoet          #+#    #+#             */
/*   Updated: 2021/10/26 18:36:07 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flen(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		len++;
	if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoan(int n)
{
	char	*dest;
	long	num;
	int		len;

	num = n;
	len = flen(num);
	dest = (char *) malloc((len + 1) * sizeof (char));
	if (!dest)
		return (0);
	dest[len] = '\0';
	if (num == 0)
		dest[0] = '0';
	if (num < 0)
	{
		dest[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		dest[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (dest);
}
