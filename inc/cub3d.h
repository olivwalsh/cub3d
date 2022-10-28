/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:01:42 by owalsh            #+#    #+#             */
/*   Updated: 2022/10/28 17:16:08 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "minilibx-linux/mlx.h"
# include "defines.h"
# include "structs.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <errno.h>

/*
** UTILS
*/
int		is_space(char c);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_strlen(char *str);
char	*get_next_line(int fd);
void	*ft_memset(void *s, int c, size_t n);
/*
** PARSING
*/


#endif