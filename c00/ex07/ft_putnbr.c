/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:49:12 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/14 13:59:47 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_negnbr(unsigned int nb)
{	
	if (nb > 9)
	{
		ft_negnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}

void	ft_putnbr(int nb)
{
	int	n;

	n = nb;
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb <= -1)
	{
		ft_putchar('-');
		ft_negnbr(nb * -1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}
