/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:14:28 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/13 16:34:18 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0x00;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = (char *) malloc(strlen(s)+1);
	if (p != 0x00)
		ft_strcpy(p, s);
	return (p);
}
