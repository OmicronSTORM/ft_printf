# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 14:20:21 by jowoundi          #+#    #+#              #
#    Updated: 2024/11/27 15:54:06 by jowoundi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_char_percent.c ft_putstr.c ft_number.c

OBJS =	$(SRC:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
INCLUDE = -I .

all: $(NAME)

.o:.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:	
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re