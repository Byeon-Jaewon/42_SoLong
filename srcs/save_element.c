/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:51:23 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 18:15:30 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	save_player_pos(t_game *game, int x, int y)
{
	game->player->x = y;
	game->player->y = x;
}

void	save_matrix(t_game *game, int x, char *line)
{
	game->matrix[x] = ft_strdup(line);
	game->matrix[x + 1] = NULL;
}
