/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:33:41 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/10 23:54:50 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>

# include "libft/libft.h"

# define TRUE 1
# define FALSE 0

typedef struct s_map
{
	int		rows;
	int		cols;
	char	**coord;
}				t_map;

int	error(char *msg);

int	parse(int argc, char **argv);

#endif