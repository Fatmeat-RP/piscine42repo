/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:15:02 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/16 03:36:45 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

void	ft_put_base(char *base, int size, long n)
{
	if (n > size - 1)
	{
		ft_put_base(base, size, n / size);
		n = n % size;
	}
	ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == 0x2B || base[i] == 0x2D || base[i] == ' '
			|| ft_check_base(base[i], base + i + 1) || base[i] == 0x00
			|| (base[i] >= 9 && base[i] <= 13))
			return ;
	}
	if (i < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_put_base(base, i, -(long)nbr);
	}
	else
		ft_put_base(base, i, nbr);
}
