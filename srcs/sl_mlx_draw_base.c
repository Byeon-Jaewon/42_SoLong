/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_mlx_draw_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:22:42 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/16 10:46:16 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_pixel(t_img *img, int x, int y)
{
	return (*(int *)(img->addr + (y * img->line + (x * (img->bpp / 8)))));
}

void	set_pixel(t_img *img, int x, int y, int color)
{
	*(unsigned int *)(img->addr + (y * img->line) + x * (img->bpp / 8)) = color;
}

t_img	*load_image(void *mlx, char *path)
{
	t_img	*img;

	img = (t_img *)malloc(sizeof(t_img));
	img->img = mlx_xpm_file_to_image(mlx, path, &img->width, &img->height);
	if (!img->img)
		return (img);
	img->addr = mlx_get_data_addr(img->img, &img->bpp,
			&img->line, &img->endian);
	return (img);
}
