# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 19:31:46 by jbyeon            #+#    #+#              #
#    Updated: 2021/12/14 18:18:38 by jbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= so_long
LIBFT		= libft
LIBFT_LIB	= ./libft/libft.a
HEADER		= so_long.h
RM			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= error.c init.c free.c util.c main.c map_parse.c map_is_valid.c map_is_rectangle.c map_counting_element.c
OBJS		= $(SRCS:.c=.o)


all : $(NAME)

.c.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)
	$(CC) -g $(CFLAGS) $(OBJS) $(LIBFT_LIB) -o $(NAME)


fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

clean :
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re : fclean all