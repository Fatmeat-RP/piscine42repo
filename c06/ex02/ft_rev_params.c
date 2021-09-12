/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:30:05 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 13:30:05 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

/*ft_swap*/

int		main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstr(argv[--argc]);
		write(1, '\n', 1);
	}
	return (0);
}