/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 00:15:59 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 04:20:26 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pchar(char c)
{
	write(1, &c, 1);
}

void	ft_phex(unsigned char c)
{
	unsigned char	*base;

	base = "0123456789abcdef";
	ft_pchar(base[c / 16]);
	ft_pchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 0x20 || str[i] > 0x7E)
		{
			ft_pchar('\\');
			ft_phex(str[i]);
		}
		else
			ft_pchar(str[i]);
		i++;
	}
}
