/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:29:40 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/21 17:22:45 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_error(int code, int err, char *arg, t_game *game)
{
	write(STDERR_FILENO, "Error\n", 6);
	if (arg)
	{
		write(STDERR_FILENO, arg, ft_strlen(arg));
		write(STDERR_FILENO, ": ", 2);
	}
	if (code == ERR_MALLOC)
		write(STDERR_FILENO, "malloc failed\n", 14);
	else if (code == ERR_ARGS_COUNT)
		write(STDERR_FILENO, "invalid number of arguments\n", 28);
	else if (code == ERR_WRONG_FILE_EXTENSION)
		write(STDERR_FILENO, \
			"wrong file extension provided. expected: *.cub file.\n", 53);
	else if (code == ERR_OPENDIR)
		write(STDERR_FILENO, \
			"trying to open a directory. expected: file format.\n", 51);
	else if (err)
	{
		write(STDERR_FILENO, strerror(errno), ft_strlen(strerror(errno)));
		write(STDERR_FILENO, "\n", 1);
	}
	ft_clean(game);
	exit(EXIT_FAILURE);
}

int	ft_error_mlx(int code, t_game *game)
{
	write(STDERR_FILENO, "Error\n", 6);
	if (code == ERR_MLX_INIT)
		write(STDERR_FILENO, "failed to initialize mlx\n", 25);
	else if (code == ERR_MLX_WIN)
		write(STDERR_FILENO, "failed to open mlx window\n", 26);
	ft_clean(game);
	exit(EXIT_FAILURE);
}

int	ft_error_map(int code, char *arg, t_game *game)
{
	write(STDERR_FILENO, "Error\n", 6);
	if (arg)
	{
		write(STDERR_FILENO, arg, ft_strlen(arg));
		write(STDERR_FILENO, ": ", 2);
	}
	if (code == ERR_MAP_WRONGID)
		write(STDERR_FILENO, "unexpected identifier in map\n", 29);
	else if (code == ERR_MAP_UNEXPECTED)
		write(STDERR_FILENO, "unexpected data in map\n", 23);
	else if (code == ERR_MAP_INCOMPLETEID)
		write(STDERR_FILENO, "incomplete information in map\n", 30);
	else if (code == ERR_TOOMANY_ID)
		write(STDERR_FILENO, \
			"one identifier has been encountered more than once\n", 51);
	else if (code == ERR_MAP_WALL)
		write(STDERR_FILENO, "map should be surrounded by walls\n", 34);
	else if (code == ERR_MAP_PLAYER)
		write(STDERR_FILENO, "unexpected number of player in the map\n", 39);
	else if (code == ERR_FORBIDDEN_CHAR)
		write(STDERR_FILENO, "map contains a forbidden character\n", 35);
	else if (code == ERR_RGB)
		write(STDERR_FILENO, "rgb color range: 0-255\n", 23);
	ft_clean(game);
	exit(EXIT_FAILURE);
}
