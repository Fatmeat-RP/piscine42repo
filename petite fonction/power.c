/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:49:07 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/04 19:14:03 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pout(char c)
{
	write(1, &c, 1);
}

void	printnbr(int n)
{
	int p;

    p = n;
    if (n <= 9)
        pout(p + '0');
    else
    {
        printpower(n / 10);
        p %= 10;
    }
    pout(p + '0');
}

void	ft_power(int n, int exp)
{
	int i;

	while (exp > 0)
	{
		i = n * n;
		exp--;
		ft_power(i, exp - 1);
	}
	printpower(i);
}
