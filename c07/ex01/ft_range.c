/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:15:27 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/13 21:28:53 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	i;
	int	*p;

	n = max - min;
	if (n <= 0)
		return (0x00);
	p = malloc(n * sizeof(int));
	if (!p)
		return (0x00);
	i = 0;
	while (i < n)
	{
		p[i] = i + min;
		i++;
	}
	return (p);
}
