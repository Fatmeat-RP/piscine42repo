/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:10:07 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 22:29:17 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	ft_array_fill(char *array, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			array[x][y] = '0';
			x++;
		}
		y++;
	}
	return (array);
}
