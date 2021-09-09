/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:50:38 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/09 13:42:03 by aviscogl         ###   ########lyon.fr   */
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
