/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:39:34 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/10 23:28:56 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	is_ber(char *map)
{
	int	i;

	i = ft_strlen(map);
	if (i < 5)
		return (FALSE);
	if (ft_strncmp(map + i - 4, ".ber", 4) != 0)
		return (FALSE);
	return (TRUE);
}

int	open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd <= 0)
		return (error("File open fail\n"));
	return (fd);
}

int	parse(int argc, char **argv)
{
	char	*line;
	int		fd;

	if (argc != 2)
		return (error("Invalid number of arguments."));
	if (is_ber(argv[1]) != TRUE)
		return (error("Invalid file type."));
	fd = open_file(argv[1]);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	printf("parse complete.\n");
	return (TRUE);
}
