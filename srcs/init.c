/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:43:14 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 23:44:17 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_player	*init_player(void)
{
	t_player	*player;

	player = (t_player *)malloc(sizeof(t_player));
	player->x = -1;
	player->y = -1;
	return (player);
}

t_game	*init_game(void)
{
	t_game	*game;

	game = (t_game *)malloc(sizeof(t_game));
	if (!game)
		return (NULL);
	game->moves = 0;
	game->player = init_player();
	game->map_row = -1;
	game->map_col = -1;
	game->collection_count = 0;
	game->exit_count = 0;
	game->matrix = NULL;
	game->floor = NULL;
	game->wall = NULL;
	game->collection = NULL;
	game->exit = NULL;
	game->mlx = NULL;
	game->win = NULL;
	game->img = NULL;
	return (game);
}

t_img	*init_img(void)
{
	t_img	*img;

	img = (t_img *)malloc(sizeof(t_img));
	if (!img)
		return (NULL);
	img->img = NULL;
	img->addr = NULL;
	img->bpp = 0;
	img->line = 0;
	img->endian = 0;
	img->width = 0;
	img->height = 0;
	return (img);
}

void	init_matrix(t_game *game)
{
	game->matrix = (char **)malloc(sizeof(char *) * (game->map_row + 2));
	if (!game->matrix)
		free_game(game);
	game->matrix[game->map_row + 1] = NULL;
}
