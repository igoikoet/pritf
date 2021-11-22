/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:21:30 by igoikoet          #+#    #+#             */
/*   Updated: 2021/11/16 16:12:07 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char *i)
{
	int		j;

	j = 0;
	if (!i)
		return (write(1, "(null)", 6));
	while (i[j])
	{
		write(1, &i[j], 1);
		j++;
	}
	return (j);
}

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}
