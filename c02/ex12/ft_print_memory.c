/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:14:45 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 04:20:38 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

void	ft_pstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] && i < 16)
	{
		write(1, &str, i);
		str++;
	}
}

void	ft_phex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_pstr(base[c / 16]);
	ft_pstr(base[c % 16]);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;

	i = 0;
	ft_putstr(&addr)
	return (addr);
}

int		main(int argc, char **argv)
{

	if (argc != 2)
		return (0);
	ft_print_memory(argv[1], ft_strlen(argv[1]));
}