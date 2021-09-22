/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:34:37 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:35:04 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int	ft_compute_diag(t_diagonal diag)
{
	return (diag.down_right.y - diag.up_left.y);
}

int	ft_valid_square(t_diagonal diag, int **map)
{
	int	start_x;

	start_x = diag.up_left.x;
	while (diag.up_left.y <= diag.down_right.y)
	{
		diag.up_left.x = start_x;
		while (diag.up_left.x <= diag.down_right.x)
		{
			if (map[diag.up_left.y][diag.up_left.x] == 1)
				return (0);
			diag.up_left.x++;
		}
		diag.up_left.y++;
	}
	return (1);
}

t_diagonal	ft_make_diagonal(t_coordinate a, t_coordinate b)
{
	t_diagonal	diag;

	diag.up_left = a;
	diag.down_right = b;
	return (diag);
}

t_diagonal	ft_big_square(t_coordinate coord,
				t_map_infos map_infos, int **map)
{
	t_diagonal		current_max_diag;
	t_coordinate	start_coord;

	current_max_diag = ft_make_diagonal(coord, coord);
	start_coord = coord;
	while (coord.y < map_infos.lines_number && coord.x < map_infos.lines_len
		&& map[coord.y][coord.x] == 0)
	{
		if (ft_valid_square(ft_make_diagonal(start_coord, coord), map))
		{
			if (ft_compute_diag(current_max_diag)
				< ft_compute_diag(ft_make_diagonal(start_coord, coord)))
				current_max_diag = ft_make_diagonal(start_coord, coord);
		}
		coord.y++;
		coord.x++;
	}
	return (current_max_diag);
}
