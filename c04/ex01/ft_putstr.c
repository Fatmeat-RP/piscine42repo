/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:14:56 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/11 15:57:38 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*s)
{
	int	k;

	k = 0;
	while (s[k])
	{
		k++;
	}
	return (k);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
