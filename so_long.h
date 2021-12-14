/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:33:41 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 23:02:03 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>

# include "libft/libft.h"

# define TRUE 1
# define FALSE 0

# define WALL '1'

typedef struct s_img
{
	int		bpp;
	int		line;
	int		endian;
	int		width;
	int		height;
	char	*addr;
	void	*img;
}	t_img;

typedef struct s_player
{
	int		x;
	int		y;
	t_img	*img;
}	t_player;

typedef struct s_draw
{
	int		x;
	int		y;
	int		color;
	int		pos_x;
	int		pos_y;
	int		p_data_x;
	int		p_data_y;
	float	r_x;
	float	r_y;
}	t_draw;

typedef struct s_game
{
	int			moves;
	int			map_row;
	int			map_col;
	int			collection_count;
	int			exit_count;
	char		**matrix;
	void		*mlx;
	void		*win;
	t_player	*player;
	t_img		*wall;
	t_img		*bottom;
	t_img		*collection;
	t_img		*exit;
	t_img		*img;
}	t_game;

// error.c
int			error(char *msg);
void		save_matrix(t_game *game, int x, char *line);

// init.c
t_player	*init_player(void);
t_game		*init_game(void);
t_img		*init_img(void);
void		init_matrix(t_game *game);

// free.c
void		free_game(t_game *game);

// util.c
int			ft_strcount(char *str, char c);
int			ft_stridx(char *str, char c);

// map
int			map_is_valid(char *file, t_game *game);
int			map_counting_element(t_game *game);
int			map_is_rectangle(char	*file, t_game *game);
int			parse(int argc, char *file, t_game *game);

#endif