/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_rectangle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:39:05 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 23:01:32 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_line_rectangle(int fd, t_game *game)
{
	int		gnl;
	char	*line;

	gnl = get_next_line(fd, &line);
	game->map_col = ft_strlen(line);
	game->map_row++;
	while (gnl == 1)
	{
		if (ft_strchr(line, ' ') || game->map_col != (int)ft_strlen(line))
		{
			free(line);
			close(fd);
			return (error("is not rectangle."));
		}
		free(line);
		gnl = get_next_line(fd, &line);
		if (gnl != 1)
			break ;
		game->map_row++;
	}
	free(line);
	close(fd);
	return (TRUE);
}

int	map_is_rectangle(char *file, t_game *game)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd <= 0)
		return (error("File open fail\n"));
	if (check_line_rectangle(fd, game) == FALSE)
		return (FALSE);
	return (TRUE);
}
