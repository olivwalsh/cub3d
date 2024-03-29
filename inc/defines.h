/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:15:59 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/21 17:10:35 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# define PI 3.141593
# define DEGREE_RADIAN 0.0174533

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define TRUE 1
# define FALSE 0

# define BUFFER_SIZE 1

# define RED 255
# define GREEN 256
# define BLUE 257

# define NORTH_TEXTURE 100
# define SOUTH_TEXTURE 1
# define WEST_TEXTURE 2
# define EAST_TEXTURE 3
# define FLOOR 104
# define CEILING 105
# define MAP_START 106

# define GROUND 48
# define WALL 49
# define NORTH_DIR 'N'
# define SOUTH_DIR 'S'
# define WEST_DIR 'W'
# define EAST_DIR 'E'

# define SIDE_X 0
# define SIDE_Y 1

// Hex_color
# define HEX_BLACK 0x000000
# define HEX_WHITE 0xFFFFFF
# define HEX_RED 0xFF0000
# define HEX_GREEN 0x00FF00
# define HEX_YELLOW 0xFFFF00
# define HEX_BLUE 0x00FFFF
# define HEX_WALLS 0x283659

// Key codes
# define KEY_UP 65362
# define KEY_DOWN 65364
# define KEY_RIGHT 65363
# define KEY_LEFT 65361
# define KEY_W 119
# define KEY_S 115
# define KEY_D 100
# define KEY_A 97
# define KEY_ESC 65307

// Errors
# define ERR_ARGS_COUNT -1
# define ERR_MAP_WRONGID -2
# define ERR_MAP_INCOMPLETEID -3
# define ERR_WRONG_FILE_EXTENSION -4
# define ERR_MALLOC -5
# define ERR_TOOMANY_ID -6
# define ERR_MAP_UNEXPECTED -7
# define ERR_MAP_WALL -8
# define ERR_MAP_PLAYER -10
# define ERR_FORBIDDEN_CHAR -11
# define ERR_RGB -12
# define ERR_MLX_INIT -20
# define ERR_MLX_WIN -21
# define ERR_OPENDIR -22

#endif