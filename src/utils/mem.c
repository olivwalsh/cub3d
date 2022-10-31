/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:11:23 by owalsh            #+#    #+#             */
/*   Updated: 2022/10/28 17:12:02 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*i_s;
	size_t	i;

	i_s = s;
	i = 0;
	while (s && i < n)
	{
		i_s[i] = c;
		i++;
	}
	return (s);
}