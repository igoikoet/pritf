/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:30:59 by igoikoet          #+#    #+#             */
/*   Updated: 2021/11/16 16:26:29 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit(int num)
{
	char	*ptr;
	int		i;

	ptr = ft_itoan(num);
	i = ft_string(ptr);
	free(ptr);
	return (i);
}

int	ft_unsigned(unsigned int num)
{
	char	*ptr;
	int		i;

	ptr = ft_itoau(num);
	i = 0;
	while (ptr[i])
	{
		write(1, &ptr[i], 1);
		i++;
	}
	free(ptr);
	return (i);
}

int	ft_hexa(unsigned int num, char *base)
{
	int	count;

	count = 0;
	if (num == 0)
	{
		write (1, "0", 1);
		count++;
		return (count);
	}
	count = ft_itoab(num, base);
	return (count);
}

int	ft_ptr(size_t num, char *base)
{
	int	count;

	count = 2;
	write(1, "0x", 2);
	if (num == 0)
	{
		write (1, "0", 1);
		count++;
		return (count);
	}
	count = 2 + ft_itoab((size_t)num, base);
	return (count);
}
