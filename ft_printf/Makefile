# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmago <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 20:09:00 by mmago             #+#    #+#              #
#    Updated: 2021/12/21 15:21:12 by mmago            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/ft_tohex.c src/ft_putchar_fd.c src/ft_putnbr_fd.c src/ft_putstr_fd.c \
      src/ft_printf.c src/ft_putpointer_fd.c src/ft_putnbr_u.c
OBJS = ${SRC:.c=.o}
NAME = libftprintf.a
CC = gcc 
FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(OBJS)

%.o: %.c 
	$(CC) $(FLAGS) -c $<
	ar rc $(NAME) $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f libftprintf.a
re: fclean all
