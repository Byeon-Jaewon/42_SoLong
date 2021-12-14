/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_counting_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:01:01 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 18:15:41 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_counting_element(t_game *game)
{
	if (game->player->x == -1)
		return (error("[map]Not found player."));
	else if (game->collection_count == 0)
		return (error("[map]Not found collection."));
	else if (game->exit_count == 0)
		return (error("[map]Not found exit."));
	return (TRUE);
}
