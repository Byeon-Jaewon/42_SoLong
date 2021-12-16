/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_mlx_key_hook.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:29:26 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/16 11:39:28 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_player_status(t_game *game)
{
	if (game->matrix[game->player->y][game->player->x] == COLLECT)
	{
		game->matrix[game->player->y][game->player->x] = FLOOR;
		game->collection_count--;
	}
	else if (game->matrix[game->player->y][game->player->x] == EXIT \
		&& game->collection_count == 0)
		close_game(game);
}

int	key_hook(int key, t_game *game)
{
	if (game->matrix[game->player->y - 1][game->player->x]
		!= WALL && key == KEY_W)
	{
		printf("press W.\n");
		game->player->y -= 1;
	}
	else if (game->matrix[game->player->y][game->player->x - 1]
		!= WALL && key == KEY_A)
		game->player->x -= 1;
	else if (game->matrix[game->player->y + 1][game->player->x]
		!= WALL && key == KEY_S)
		game->player->y += 1;
	else if (game->matrix[game->player->y][game->player->x + 1]
		!= WALL && key == KEY_D)
		game->player->x += 1;
	else if (key == KEY_ESC)
		close_game(game);
	else
		return (1);
	check_player_status(game);
	game->moves++;
	ft_putnbr_fd(game->moves, 1);
	write(1, "\n", 1);
	return (0);
}
