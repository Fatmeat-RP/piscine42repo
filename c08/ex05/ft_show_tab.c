/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 03:30:54 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/23 10:10:27 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	 write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	n;

	n = 0;
	while (par[n].str)
	{
		ft_putstr(par[n].str);
		ft_putchar('\n');
		ft_putnbr(par[n].size);
		ft_putchar('\n');
		ft_putstr(par[n].copy);
		ft_putchar('\n');
		n++;
	}
}
