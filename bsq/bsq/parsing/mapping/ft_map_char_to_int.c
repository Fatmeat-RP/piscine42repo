/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_char_to_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:20:10 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:24:21 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../bsq.h"

int	ft_get_idxs(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	*ft_map_line(char *line, t_map_infos map_infos)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * map_infos.lines_len);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < map_infos.lines_len)
	{
		tab[i] = ft_get_idxs(line[i], map_infos.charset);
		i++;
	}
	return (tab);
}

int	**ft_map_char_to_int(char **map, t_map_infos map_infos)
{
	int	**tab;
	int	i;

	tab = malloc(sizeof(int *) * map_infos.lines_number);
	if (!tab)
		return (NULL);
	map++;
	i = -1;
	while (++i < map_infos.lines_number)
		tab[i] = ft_map_line(map[i], map_infos);
	return (tab);
}
