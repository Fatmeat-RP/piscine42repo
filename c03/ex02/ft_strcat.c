/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:45:32 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/09 15:48:19 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != 0x00)
		dest++;
	while (*src != 0x00)
	{
		*dest = *(unsigned char *)src;
		dest++;
		src++;
	}
	*dest = 0x00;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1[65];
	char	*s2;

	s2 = "dickus";
	printf("%s", ft_strcat(s1, s2));
	printf("%s", strcat(s1, s2));
}
*/