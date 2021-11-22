/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:24:00 by igoikoet          #+#    #+#             */
/*   Updated: 2021/10/28 16:11:11 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_formats(int i, const char *str, va_list arg)
{
	int	len;

	len = 0;
	if (str[i + 1] == 'c')
		len = ft_char(va_arg(arg, int));
	if (str[i + 1] == 's')
		len = ft_string(va_arg(arg, char *));
	if (str[i + 1] == 'i' || str[i + 1] == 'd')
		len = ft_digit(va_arg(arg, int));
	if (str[i + 1] == 'u')
		len = ft_unsigned(va_arg(arg, unsigned int));
	if (str[i + 1] == 'x')
		len = ft_hexa(va_arg(arg, unsigned int), HEX_BASE);
	if (str[i + 1] == 'X')
		len = ft_hexa(va_arg(arg, unsigned int), HEX_BASE_UP);
	if (str[i + 1] == 'p')
		len = ft_ptr(va_arg(arg, size_t), HEX_BASE);
	if (str[i + 1] == '%')
	{
		len = 1;
		write(1, "%", 1);
	}
	return (len);
}

int	ft_put_string(const char *str, va_list arg)
{
	int	i;
	int	count;
	int	len;

	len = 0;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count++;
			i++;
		}
		else
		{
			len = ft_formats(i, str, arg);
			count = count + len;
			len = 0;
			i = i + 2;
		}
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;

	if (!str)
		return (0);
	va_start (arg, str);
	len = ft_put_string(str, arg);
	va_end(arg);
	return (len);
}
