/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:34:29 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:35:04 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../bsq.h"

int	ft_is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] && i < 2)
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}
