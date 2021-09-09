/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:46:14 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 16:26:37 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest != 0x00)
		dest++;
	while (*src != 0x00 && nb > 0)
	{
		*dest = *(unsigned char *)src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest);
}
