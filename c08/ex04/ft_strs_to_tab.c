/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:33:49 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/23 04:36:22 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	while (src[i])
		i++;
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = 0x00;
	return (p);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*par;
	int					n;

	par = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!par)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		par[n].size = ft_strlen(av[n]);
		par[n].str = av[n];
		par[n].copy = ft_strdup(av[n]);
		n++;
	}
	return (par);
}
