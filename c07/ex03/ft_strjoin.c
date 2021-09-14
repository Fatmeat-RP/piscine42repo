/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:17:55 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/14 03:57:52 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0x00;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*imstuckstepbro;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	imstuckstepbro = malloc((j + 1) * sizeof(char));
	if (!imstuckstepbro)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(imstuckstepbro + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += imstuckstepbro + j + ft_strlen(sep)
				- ft_strcpy(imstuckstepbro + j, sep);
	}
	imstuckstepbro[j + 1] = 0x00;
	return (imstuckstepbro);
}
