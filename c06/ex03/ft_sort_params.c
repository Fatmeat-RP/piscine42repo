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

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, str, 1);
}

void	ft_swap(char **a, char **b)
{
	int	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0x00 && (s1[i] == s2[i]))
		i++;
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (ft_strcmp(*argv[i - 1], argv[i]) > 0)
		{
			ft_swap(*argv[i], *argv[i - 1]);
			i = 0;
		}
		ft_put_str(argv[i]);
		i++;
	}
}
