/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:37:15 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 00:05:45 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	if (i + 1 < size)
	{
		j = 0;
		while (j < i + 1)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else if (size)
	{
		j = 0;
		while (j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = 0x00;
	}
	return (i);
}
