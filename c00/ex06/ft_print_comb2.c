/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:19:08 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/05 00:11:26 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pchar(int c)
{
	write(1, &c, 1);
}

void	printcomb(char c, char d)
{
	ft_pchar(c / 10 + '0');
	ft_pchar(c % 10 + '0');
	ft_pchar(' ');
	ft_pchar(d / 10 + '0');
	ft_pchar(d % 10 + '0');
	if (!(c == 98 && d == 99))
	{
		ft_pchar(',');
		ft_pchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		if (b == 100)
		{
			b = ++a + 1;
		}
		if (a != b && a != 99)
		{
			printcomb(a, b);
		}
		b++;
	}
}
