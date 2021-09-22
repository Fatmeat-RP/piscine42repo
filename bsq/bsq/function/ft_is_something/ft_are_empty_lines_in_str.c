/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_are_empty_lines_in_str.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:34:31 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/22 13:35:04 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../bsq.h"

int	are_empy_lines_in_str(char *str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i] == '\n' && str[i - 1] == '\n')
			return (1);
		i++;
	}
	return (0);
}
