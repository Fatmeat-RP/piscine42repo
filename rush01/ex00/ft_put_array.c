/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:10:32 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 22:28:23 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_array(char *array, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			ft_putchar(array[x][y]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
