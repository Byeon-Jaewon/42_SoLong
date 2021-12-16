/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:46:42 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/15 19:26:03 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_matrix(t_game *game)
{
	int	i;

	if (!game->matrix)
		return ;
	i = 0;
	while (game->matrix[i] && i <= game->map_row)
	{
		if (game->matrix[i])
		{
			free(game->matrix[i]);
		}
		i++;
	}
	free(game->matrix);
}

void	free_game(t_game *game)
{
	if (!game)
		exit (0);
	if (game->img)
		free(game->img);
	if (game->matrix)
		free_matrix(game);
	if (game->wall)
		free(game->wall);
	if (game->floor)
		free(game->floor);
	if (game->exit)
		free(game->exit);
	if (game->collection)
		free(game->collection);
	if (game->player->img)
		free(game->player->img);
	if (game->player)
		free(game->player);
	exit (1);
}

int	close_game(t_game *game)
{
	if (game->player->img->img)
		mlx_destroy_image(game->mlx, game->player->img->img);
	if (game->exit->img)
		mlx_destroy_image(game->mlx, game->exit->img);
	if (game->collection->img)
		mlx_destroy_image(game->mlx, game->collection->img);
	if (game->floor->img)
		mlx_destroy_image(game->mlx, game->floor->img);
	if (game->wall->img)
		mlx_destroy_image(game->mlx, game->wall->img);
	if (game->img->img)
		mlx_destroy_image(game->mlx, game->img->img);
	if (game->win)
		mlx_destroy_window(game->mlx, game->win);
	free_game(game);
	exit(1);
}
