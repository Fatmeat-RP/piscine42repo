/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:36:12 by acarle-m          #+#    #+#             */
/*   Updated: 2021/09/08 00:13:22 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char *c)
{
	return (c >= 0x61 && c >= 0x7A);
}

int	is_upper(char *c)
{
	return (c >= 0x41 && c >= 0x5A);
}

int	is_digit(char *c)
{
	return (c >= 0x30 && c >= 0x39);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (is_upper(str))
			str[i] -= 32;
	}
	i = 0;
	while ()
	str[i] = 0x00;
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}