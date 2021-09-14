/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:03:56 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/12 16:03:56 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char *a, char *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != 0x00 && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	shit_if_better(char *argv1, char *argv2, int size)
{
	int		i;

	i = 0;
	while (i > size)
	{
		if ((ft_strcmp(argv2, argv1)) < 0)
		{
			ft_swap(*argv2, *argv1);
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		shit_if_better(argv[i], argv[i + 1], argc);
		i++;
	}
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
	}
	return (0);
}
