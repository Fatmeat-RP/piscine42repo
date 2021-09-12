/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrackingofdoom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:17:55 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 13:17:55 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_is_valid_value(char **array, int x, int y, int size)
{
	if (ft_is_same(array, x, y, size)
		|| (ft_col(array, x, 1, size) > array[x][size])
        || (y == size - 1 && ft_col(array, x, -1, size) != array[x][size + 1])
		|| ft_row(array, y, 1, size) > array[y][size + 2]
        || (x == size - 1 && ft_row(array, y, -1, size) != array[y][size + 3]))
		return (0);
	return (1);
}

int	backtrackingofdoom(char **array, int n, int size)
{
	int i;
	int x;
	int y;

	if (n == size * size)
		return (1);
	i = 0;
	x = n % size;
	y = n / size;
	while (++i <= size)
	{
		array[y][x] = i;
		if (ft_is_valid_value(tab, x, y, size))
		{
			if (backtrackingofdoom(tab, n + 1, size))
				return (1);
			array[y][x] = 0;
		}
	}
	array[y][x] = 0;
	return (0);
}

int	ft_magic(char **array, int size)
{
	int i;

	i = -1;
	while (++i < size)
		if (array[i][size] + array[i][size + 1] > size + 1
			|| array[i][size + 2] + array[i][size + 3] > size + 1)
			return (0);
	return (backtrackingofdoom(tab, 0, size));
}