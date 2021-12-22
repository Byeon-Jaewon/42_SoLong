/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_mlx_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 00:06:58 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/16 11:25:08 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_on_img(t_img *img_link, t_img *img, int x, int y)
{
	t_draw	draw;

	draw.x = 0;
	while (draw.x < 64)
	{
		draw.y = 0;
		while (draw.y < 64)
		{
			draw.r_x = (float)draw.x / (float)64;
			draw.r_y = (float)draw.y / (float)64;
			draw.pos_x = draw.r_x * img->width;
			draw.pos_y = draw.r_y * img->height;
			draw.color = get_pixel(img, draw.pos_x, draw.pos_y);
			draw.p_data_x = x + draw.x;
			draw.p_data_y = y + draw.y;
			if (draw.color != (int)0xFF000000)
				set_pixel(img_link, draw.p_data_x, draw.p_data_y, draw.color);
			draw.y++;
		}
		draw.x++;
	}
}

void	put_element(t_game *game, int x, int y)
{
	if (game->matrix[y][x] == WALL || game->matrix[y][x] == FLOOR \
			|| game->matrix[y][x] == PLAYER)
		return ;
	if (game->matrix[y][x] == COLLECT)
		draw_on_img(game->img, game->collection, x * 64, y * 64);
	if (game->matrix[y][x] == EXIT)
		draw_on_img(game->img, game->exit, x * 64, y * 64);
}

void	sl_draw_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->matrix[y])
	{
		x = 0;
		while (game->matrix[y][x])
		{
			if (game->matrix[y][x] == WALL)
				draw_on_img(game->img, game->wall, x * 64, y * 64);
			else
				draw_on_img(game->img, game->floor, x * 64, y * 64);
			x++;
		}
		y++;
	}
}

void	sl_put_element(t_game *game)
{
	int	x;
	int	y;
	int	px;
	int	py;

	py = 1;
	y = 0;
	while (game->matrix[y])
	{
		x = 0;
		px = 1;
		while (game->matrix[y][x])
		{
			put_element(game, x, y);
			px += 64;
			x++;
		}
		py += 64;
		y++;
	}
}

void	sl_put_player(t_game *game)
{
	draw_on_img(game->img, game->player->img,
		game->player->x * 64, game->player->y * 64);
}
