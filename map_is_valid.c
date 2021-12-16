/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:15:13 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 23:34:50 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_is_walled(int x, char *line, t_game *game)
{
	int	y;

	y = 0;
	if (x == 0 || x == game->map_row)
	{
		while (y < game->map_col)
		{
			if (line[y++] != WALL)
				return (FALSE);
		}
	}
	else
	{
		if (line[0] != WALL || line[game->map_col - 1] != WALL)
			return (FALSE);
	}
	return (TRUE);
}

int	check_player(int x, char *line, t_game *game)
{
	int	player;
	int	y;

	player = ft_strcount(line, 'P');
	if (player == 0)
		return (TRUE);
	if (player > 1)
		return (FALSE);
	if (player == 1 && game->player->x != -1)
		return (FALSE);
	y = ft_stridx(line, 'P');
	game->player->x = y;
	game->player->y = x;
	return (TRUE);
}

int	check_line_element(int x, char *line, t_game *game)
{
	if (map_is_walled(x, line, game) == FALSE)
		return (error("[map]map is not walled."));
	if (check_player(x, line, game) == FALSE)
		return (error("[map]invalid number of player."));
	game->collection_count += ft_strcount(line, 'C');
	game->exit_count += ft_strcount(line, 'E');
	return (TRUE);
}

int	map_is_valid(char *file, t_game *game)
{
	int		fd;
	int		x;
	char	*line;

	init_matrix(game);
	fd = open(file, O_RDONLY);
	if (fd <= 0)
		return (error("File open fail\n"));
	get_next_line(fd, &line);
	x = -1;
	while (x++ < game->map_row)
	{
		if (check_line_element(x, line, game) == FALSE)
		{
			free(line);
			close(fd);
			return (FALSE);
		}
		save_matrix(game, x, line);
		free(line);
		get_next_line(fd, &line);
	}
	free(line);
	close(fd);
	return (TRUE);
}
