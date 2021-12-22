/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_mlx_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:30:23 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/16 11:11:20 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_player_img(t_game *game)
{
	game->player->img = load_image(game->mlx, "./assets/player.xpm");
	if (!game->player->img)
	{
		error("player img error.");
		free_game(game);
	}
}

void	init_floor_img(t_game *game)
{
	game->floor = load_image(game->mlx, "./assets/floor.xpm");
	if (!game->floor)
	{
		error("floor img error.");
		free_game(game);
	}
}

void	init_wall_img(t_game *game)
{
	game->wall = load_image(game->mlx, "./assets/wall.xpm");
	if (!game->wall)
	{
		error("wall img error.");
		free_game(game);
	}
}

void	init_exit_img(t_game *game)
{
	game->exit = load_image(game->mlx, "./assets/exit.xpm");
	if (!game->exit)
	{
		error("exit img error.");
		free_game(game);
	}
}

void	init_coll_img(t_game *game)
{
	game->collection = load_image(game->mlx, "./assets/gas.xpm");
	if (!game->collection)
	{
		error("collection img error.");
		free_game(game);
	}
}
