/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:34:41 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:35:04 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	write_full(int **map, t_diagonal diag)
{
	int	last_x;

	last_x = diag.up_left.x;
	while (diag.up_left.y <= diag.down_right.y)
	{
		while (diag.up_left.x <= diag.down_right.x)
		{
			map[diag.up_left.y][diag.up_left.x] = 2;
			diag.up_left.x++;
		}
		diag.up_left.y++;
		diag.up_left.x = last_x;
	}
}

void	solve_map(int **map, t_map_infos map_infos)
{
	t_diagonal		current_max_diag;
	t_coordinate	current_coord;

	current_coord.y = 0;
	current_coord.x = 0;
	current_max_diag = ft_make_diagonal(current_coord, current_coord);
	while (current_coord.y < map_infos.lines_number
		&& current_coord.x < map_infos.lines_len
		&& map[current_coord.y][current_coord.x] == 0)
	{
		while (current_coord.y < map_infos.lines_number && current_coord.x
			< map_infos.lines_len && map[current_coord.y][current_coord.x] == 0)
		{
			ft_big_square(current_coord, map_infos, map);
			if (ft_compute_diag(ft_big_square
					(current_coord, map_infos, map))
				> ft_compute_diag(current_max_diag))
				current_max_diag = ft_big_square
					(current_coord, map_infos, map);
			current_coord.x++;
		}
		current_coord.y++;
		current_coord.x = 0;
	}
	write_full(map, current_max_diag);
}

void	solve_args(char *map_path)
{
	char			**map;
	t_map_infos		map_infos;
	int				**tab;
	char			**zgeg;
	t_coordinate	coord;

	map = ft_get_map(map_path);
	if (!ft_validate_map(map, &map_infos))
	{
		ft_putstr("map error\n");
		return ;
	}
	tab = ft_map_char_to_int(map, map_infos);
	ft_clean_map(map);
	coord.x = 0;
	coord.y = 0;
	solve_map(tab, map_infos);
	zgeg = ft_map_int_to_char(tab, map_infos);
	while (coord.y < map_infos.lines_number)
	{
		ft_putstr(zgeg[coord.y++]);
		ft_putstr("\n");
	}
	ft_clean_map(zgeg);
	ft_clean_tab(tab, map_infos);
}
