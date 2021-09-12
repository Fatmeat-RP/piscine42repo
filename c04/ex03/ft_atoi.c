/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:15:00 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/11 16:10:16 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	n;

	i = 0;
	sign = 1;
	while ((str[i] == 0x20) || (str[i] == 0x09)
		|| (str[i] >= 0x0A && str[i] <= 0x0D))
		i++;
	while (str[i] == 0x2D || str[i] == 0x2B)
		if (str[i++] == 0x2D)
			sign *= -1;
	n = 0;
	while (str[i] >= 0x30 && str[i] <= 0x39)
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	return (sign * n);
}
