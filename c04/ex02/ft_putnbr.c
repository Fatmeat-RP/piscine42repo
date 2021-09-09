/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:14:58 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 19:21:48 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pout(char c)
{
	write(1, &c, 1);
}

void	ft_putnegnbr(unsigned int nb)
{	
	if (nb > 9)
	{
		ft_putnegnbr(nb / 10);
		nb %= 10;
	}
	pout(nb + '0');
}

void	ft_putnbr(int nb)
{
	int	n;

	n = nb;
	if (nb == 0)
	{
		pout('0');
	}
	if (nb <= -1)
	{
		pout('-');
		ft_poutnegnbr(nb * -1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	pout(n + '0');
}