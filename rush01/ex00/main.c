/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:29:10 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 13:29:10 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <rush01.h>

    void	ft_error(void)
{
	write(1, "Error\n", 7);
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		size;

	i = 0;
	while (argv[i])
	{
		if (argv[i] > size)
			ft_error();
	}
	i = 0;
	if (ft_strlen(argv) % size != 0)
		ft_error();
	else if ((tab = ft_array(argv[1], size)))
	{
		if (ft_OK(tab, size))
			ft_putstr_sizelen(tab, size);
		ft_no_array(tab, size);
	}
	else
		ft_error();
	return (0);
}
