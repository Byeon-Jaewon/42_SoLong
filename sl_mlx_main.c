/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_mlx_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:31:14 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/16 11:36:18 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	loop_hook(t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->win, game->img->img, 0, 0);
	sl_draw_map(game);
	sl_put_element(game);
	sl_put_player(game);
	return (0);
}

void	main_loop(t_game *game)
{
	mlx_loop_hook(game->mlx, loop_hook, game);
	mlx_key_hook(game->win, key_hook, game);
	mlx_hook(game->win, 17, 0, close_game, game);
	mlx_loop(game->mlx);
}

int	sl_mlx_main(t_game *game)
{
	game->map_row++;
	printf("map size :%d * %d\n", game->map_row, game->map_col);
	game->mlx = mlx_init();
	if (!game->mlx)
		return (error("can't connect mlx."));
	game->win = mlx_new_window(game->mlx,
			game->map_col * 64, game->map_row * 64, "solong");
	game->img->img = mlx_new_image(game->mlx,
			game->map_col * 64, game->map_row * 64);
	game->img->addr = mlx_get_data_addr(game->img->img, &game->img->bpp,
			&game->img->line, &game->img->endian);
	init_player_img(game);
	init_floor_img(game);
	init_wall_img(game);
	init_exit_img(game);
	init_coll_img(game);
	main_loop(game);
	return (TRUE);
}
