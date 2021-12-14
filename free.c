/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:46:42 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 23:24:03 by jbyeon           ###   ########.fr       */
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
	if (game->bottom)
		free(game->bottom);
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
