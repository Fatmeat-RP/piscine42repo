/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:34:39 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/03 14:29:26 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pchar(char c)
{
	write(1, &c, 1);
}

void	pout(char i, char o, char p)
{
	ft_pchar(i);
	ft_pchar(o);
	ft_pchar(p);
	if (!(i == '7' && o == '8' && p == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	t;
	int	u;

	c = '0';
	while (c <= '7')
	{
		t = c + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				pout(c, t, u);
				u++;
			}
			t++;
		}
		c++;
	}
}
