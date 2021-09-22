/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:20:08 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:40:27 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../bsq.h"

int	ft_validate_first_line(char *line)
{
	int	i;
	int	j;

	i = 0;
	while (is_number(line[i]) && i < ft_strlen(line) - 3)
		i++;
	if (i < 1)
		return (0);
	line += i;
	i = 0;
	while (line[i])
	{
		j = i + 1;
		while (line[j])
		{
			if (line[j] == line[i] || !is_printable(line[i]))
				return (0);
			j++;
		}
		i++;
	}
	if (i != 3)
		return (0);
	return (1);
}

void	ft_set_map_infos(char *line, t_map_infos *map_infos)
{
	int	i;

	i = 0;
	map_infos->lines_number = 0;
	while (is_number(line[i]) && i < ft_strlen(line) - 3)
	{
		map_infos->lines_number = (line[i] - '0')
			+ map_infos->lines_number * 10;
		i++;
	}
	line += i;
	i = 0;
	while (i < 3)
	{
		map_infos->charset[i] = line[i];
		i++;
	}
	map_infos->charset[i] = '\0';
}

int	ft_validate_map(char **map, t_map_infos *map_infos)
{
	int	i;
	int	j;

	if (!map[0] || !ft_validate_first_line(map[0]))
		return (0);
	ft_set_map_infos(map[0], map_infos);
	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (!ft_is_in_charset(map[i][j], map_infos->charset))
				return (0);
			j++;
		}
		if (i == 1)
			map_infos->lines_len = j;
		else if (j != map_infos->lines_len)
			return (0);
		i++;
	}
	if (i - 1 != map_infos->lines_number || i - 1 < 1)
		return (0);
	return (1);
}
