/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:57:15 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 12:57:15 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <rush01.h>

char	**ft_array(char *str, int size)
{
	char	**array;
	int	x;
	int	y;

	if (!(array = malloc(size * sizeof(char))))
		return (0x00);
	x = 0;
	y = 0;
	while (y < size)
	{
		if (!(array[x][y] = malloc((size * size) * sizeof(char))))
			return (0x00);
		x = 0;
		while (x < size)
		{
			array[y][x] = 0;
			x++;
		}
		x = 0;
		while (y <= size)
		{
			while (x <= size)
			{
				array[x][y] = str[x + (y * size)] - '0';
				x++;
			}
			y++;
			x = 0;
		}
	}
	return (array);
}

void	ft_no_array(char **array, int size)
{
	while (size > 0)
	{
		free(array[size]);
	size--;
	}
	free(array);
}