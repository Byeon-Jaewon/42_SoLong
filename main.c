/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:30:32 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/18 20:55:06 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	*game;

	game = init_game();
	if (game == NULL)
		return (FALSE);
	game->img = init_img();
	if (game->img == NULL)
		return (FALSE);
	if (parse(argc, argv[1], game) == FALSE)
		return (FALSE);
	sl_mlx_main(game);
	return (TRUE);
}
