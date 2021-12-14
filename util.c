/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:32:48 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/14 18:20:25 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strcount(char *str, char c)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			result++;
		i++;
	}
	return (result);
}

int	ft_stridx(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	save_matrix(t_game *game, int x, char *line)
{
	game->matrix[x] = ft_strdup(line);
	game->matrix[x + 1] = NULL;
}
