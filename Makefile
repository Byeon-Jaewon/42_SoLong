# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 19:31:46 by jbyeon            #+#    #+#              #
#    Updated: 2021/12/21 17:38:50 by jbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= so_long
LIBFT		= libft
LIBFT_LIB	= ./libft/libft.a
MLXPATH		= ./minilibx
MLXFLAG		= -Lmlx -lmlx -L/usr/lib -Imlx -lXext -lX11 -lm -lz
HEADER		= so_long.h
RM			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= srcs/error.c srcs/init.c srcs/free.c srcs/util.c srcs/main.c \
				srcs/map_parse.c srcs/map_is_valid.c srcs/map_is_rectangle.c srcs/map_counting_element.c \
				srcs/sl_mlx_draw_base.c srcs/sl_mlx_draw.c srcs/sl_mlx_init.c srcs/sl_mlx_key_hook.c srcs/sl_mlx_main.c
OBJS		= $(SRCS:.c=.o)


all : $(NAME)

.c.o : $(SRCS)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	make all -C $(LIBFT)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(MLXPATH) $(MLXFLAG) -L $(LIBFT) -lft


fclean : clean
	$(RM) $(NAME)
	$(RM) $(OBJS)
	make fclean -C $(LIBFT)

clean :
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re : fclean all
