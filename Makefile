# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 19:31:46 by jbyeon            #+#    #+#              #
#    Updated: 2021/12/16 10:45:47 by jbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= so_long
LIBFT		= libft
LIBFT_LIB	= ./libft/libft.a
MLXPATH		= ./mlx_linux
MLXFLAG		= -Lmlx -lmlx -L/usr/lib -Imlx -lXext -lX11 -lm -lz
HEADER		= so_long.h
RM			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= error.c init.c free.c util.c main.c \
				map_parse.c map_is_valid.c map_is_rectangle.c map_counting_element.c \
				sl_mlx_draw_base.c sl_mlx_draw.c sl_mlx_init.c sl_mlx_key_hook.c sl_mlx_main.c
OBJS		= $(SRCS:.c=.o)


all : $(NAME)

.c.o : $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	make all -C $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(MLXPATH) $(MLXFLAG) -L $(LIBFT) -lft


fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

clean :
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re : fclean all