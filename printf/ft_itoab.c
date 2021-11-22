/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:06:31 by igoikoet          #+#    #+#             */
/*   Updated: 2021/11/16 16:10:56 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoab(size_t num, char *base)
{
	int	len;
	int	size;

	len = 0;
	size = 0;
	while (base[size] != '\0')
		size++;
	if (num / size != 0)
		ft_itoab(num / size, base);
	ft_char(base[num % size]);
	while (num != 0)
	{
		num = num / size;
		len++;
	}
	return (len);
}
