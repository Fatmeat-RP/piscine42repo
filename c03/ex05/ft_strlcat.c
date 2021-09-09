/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:16:49 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/09 15:48:24 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (i < size && *dest)
	{
		dest++;
		i++;
	}
	if (i == size)
		return (i + (unsigned int)ft_strlen(src));
	n = 0;
	while (src[n])
	{
		if (n < size - i - 1)
			dest[i + n] = src[n];
		n++;
	}
	*dest = 0x00;
	return (ft_strlen(src) + ft_strlen(dest));
}
