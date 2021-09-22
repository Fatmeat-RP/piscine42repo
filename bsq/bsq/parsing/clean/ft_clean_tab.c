/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:20:14 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:24:21 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../bsq.h"

void	ft_clean_tab(int **map, t_map_infos map_infos)
{
	int	i;

	i = 0;
	while (i < map_infos.lines_number)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
