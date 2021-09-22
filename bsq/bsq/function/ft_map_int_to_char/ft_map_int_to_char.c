/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_int_to_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:06:47 by egiraldi          #+#    #+#             */
/*   Updated: 2021/09/22 13:24:21 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../bsq.h"

char	ft_nbtoch(int nb, char *charset)
{
	char	c;

	c = charset[nb];
	return (c);
}

char	**ft_map_int_to_char(int **map, t_map_infos mapinf)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	array = malloc(mapinf.lines_number * (sizeof(char *) + 1));
	if (!array)
		return (NULL);
	while (i < mapinf.lines_number)
	{
		j = 0;
		array[i] = malloc(sizeof(char) * (mapinf.lines_len + 1));
		if (!array[i])
			return (NULL);
		while (j < mapinf.lines_len)
		{
			array[i][j] = ft_nbtoch(map[i][j], mapinf.charset);
			j++;
		}
		array[i][j] = '\0';
		i++;
	}
	array[i] = 0;
	return (array);
}
