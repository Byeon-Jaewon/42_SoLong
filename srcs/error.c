/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:00:32 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/09 16:04:25 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	base_error(void)
{
	ft_putstr_fd("Error\n", 2);
}

int	error(char *msg)
{
	base_error();
	ft_putendl_fd(msg, 2);
	return (FALSE);
}
