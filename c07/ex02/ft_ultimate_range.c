/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:16:53 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/19 00:44:46 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;

	n = max - min;
	if (n <= 0)
	{
		range = 0x00;
		return (0x00);
	}
	*range = malloc(n * sizeof(int));
	if (!*range)
		return (0x00);
	i = 0;
	while (i < n)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (n);
}
