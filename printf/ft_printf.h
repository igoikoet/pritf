/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:24:35 by igoikoet          #+#    #+#             */
/*   Updated: 2021/11/16 18:38:09 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define HEX_BASE		"0123456789abcdef"
# define HEX_BASE_UP	"0123456789ABCDEF"

int		ft_printf(const char *str, ...);
int		ft_digit(int num);
int		ft_unsigned(unsigned int num);
int		ft_hexa(unsigned int num, char *base);
int		ft_ptr(size_t num, char *base);
int		ft_string(char *i);
int		ft_char(int c);
int		ft_itoab(size_t num, char *base);
char	*ft_itoan(int n);
char	*ft_itoau(unsigned int n);

#endif
