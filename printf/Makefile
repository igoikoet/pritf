# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 17:00:45 by igoikoet          #+#    #+#              #
#    Updated: 2021/11/16 18:30:21 by igoikoet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_itoab.c\
		  ft_itoan.c\
		  ft_itoau.c\
		  ft_printf.c\
		  ft_printfutils1.c\
		  ft_printfutils2.c

OBJS	= $(SRCS:%.c=%.o)

LIBC	= ar rcs

CC		= gcc

RM		= -rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):
	    $(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

