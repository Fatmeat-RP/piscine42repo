/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:15:02 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/15 00:42:13 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_put_base(char *base, int size, int n)
{
	if (n > 9)
	{
		ft_put_base(base, size, n / 10);
		n %= size;
	}
	else
		return (0x00);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == 0x2B || base[i] == 0x2D || base[i] == ' ' || base[])
			ft_put_base(base, ft_strlen(base), nb);
		i++;
	}
}
