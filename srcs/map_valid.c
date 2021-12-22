/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 23:33:01 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/10 23:38:18 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_map_rectangle(int before_len, int after_len)
{
	if (before_len == -1)
		return (TRUE);
	if (before_len != after_len)
		return (FALSE);
	return (TRUE);
}

int	is_map_walled(void)
{
	return (TRUE);
}
