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

void	ft_swap(int	*a, int	*b)
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

void	shit_if_better(char **argv)
{
	int		i;
	int		j;
	char	incroyablevariablevraimenttresimportantes;

	i = 0;
	while (argv[i])
	{
		if (ft_strcmp(argv[i - 1], argv[i]) > 0){}
		else if (ft_strcmp(argv[i - 1], argv[i]))
			return (0);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	shit_if_better(**argv);
	i = 0;
	while (++i < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		ft_putchar('\n');
	}
	return (0);
}
