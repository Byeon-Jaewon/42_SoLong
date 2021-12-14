/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:39:34 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 23:01:17 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	map_is_ber(char *map)
{
	int	i;

	i = ft_strlen(map);
	if (i < 5)
		return (FALSE);
	if (ft_strncmp(map + i - 4, ".ber", 4) != 0)
		return (FALSE);
	return (TRUE);
}

int	parse(int argc, char *file, t_game *game)
{
	if (argc != 2)
		return (error("Invalid number of arguments."));
	if (map_is_ber(file) != TRUE)
		return (error("Invalid file type."));
	if (map_is_rectangle(file, game) != TRUE)
		return (FALSE);
	if (map_is_valid(file, game) != TRUE)
		return (FALSE);
	if (map_counting_element(game) != TRUE)
		return (FALSE);
	printf("parse clear.\n");
	return (TRUE);
}
